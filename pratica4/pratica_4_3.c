/*
Program: Queue usage
Author: Douglas Almonfrey
Date: May 27, 2024
Description: Implementation of a queue
License: CC BY
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} tNode;

typedef struct queue {
    tNode* front;
    tNode* rear;
} tQueue;

// Insert element at the rear
void insert_rear(tQueue *queue, int new_data) {
    tNode* new_node = (tNode*) malloc(sizeof(tNode));
    if (new_node == NULL) {
        printf("Error: No space left in memory.\n");
        return;
    }

    new_node->data = new_data;
    new_node->next = NULL;

    if (queue->rear == NULL) {
        // If the queue is empty, front and rear will point to the new node
        queue->front = queue->rear = new_node;
    } else {
        // Link the new node to the rear of the queue and update the rear
        queue->rear->next = new_node;
        queue->rear = new_node;
    }
}

// Remove element from the front
void remove_front(tQueue *queue) {
    // Check if the queue is empty
    if (queue->front == NULL) {
        printf("Cannot dequeue from an empty queue.\n");
        return;
    }

    tNode* temp = queue->front;
    queue->front = queue->front->next;

    // If the front becomes NULL, then rear should also be NULL
    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp); // Free memory allocated for the node
}

// Release allocated memory for the queue
void free_queue(tQueue *queue) {
    tNode* current = queue->front;
    tNode* temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp); // Free memory allocated for each node
    }

    queue->front = queue->rear = NULL; // Set queue pointers to NULL after freeing all nodes
}

// Print all elements of the queue
void print_queue(tQueue *queue) {
    tNode* current = queue->front;

    printf("Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Queue constructor
tQueue create_queue() {
    tQueue queue;
    queue.front = queue.rear = NULL; // Initialize the queue with NULL pointers
    return queue;
}

int main() {
    tQueue queue = create_queue();
  
    insert_rear(&queue, 1);
    insert_rear(&queue, 2);
    insert_rear(&queue, 3);
    insert_rear(&queue, 4);
    insert_rear(&queue, 5);

    print_queue(&queue);

    remove_front(&queue);
    remove_front(&queue);

    print_queue(&queue);

    free_queue(&queue);

    return 0;
}
