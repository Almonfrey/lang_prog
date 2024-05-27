/*
Program: Linked stack usage
Author: Douglas Almonfrey
Date: May 27, 2024
Description: Implementation of a linked stack
License: CC BY
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} tNode;

typedef struct stack {
    tNode* top;
} tStack;

// Push element onto the stack
void push(tStack *stack, int new_data) {
    tNode* new_node = (tNode*) malloc(sizeof(tNode));
    if (new_node == NULL) {
        printf("Error: No space left in memory.\n");
        return;
    }

    new_node->data = new_data;
    new_node->next = stack->top; // Set next of new node
    stack->top = new_node; // Update stack top pointer to new node
}

// Pop element from the stack
void pop(tStack *stack) {
    // Check if the stack is empty
    if (stack->top == NULL) {
        printf("Cannot pop from an empty stack.\n");
        return;
    }

    tNode* temp = stack->top; // Get the top node
    stack->top = stack->top->next; // Update stack top pointer to next node
    free(temp); // Free memory allocated for the node
}

// Release allocated memory for the stack
void free_stack(tStack *stack) {
    tNode* current = stack->top;
    tNode* temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp); // Free memory allocated for each node
    }

    stack->top = NULL; // Set stack pointer to NULL after freeing all nodes
}

// Print all elements of the stack
void print_stack(tStack *stack) {
    tNode* current = stack->top;

    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Stack constructor
tStack create_stack() {
    tStack stack;
    stack.top = NULL; // Initialize the stack with NULL pointer
    return stack;
}

int main() {
    tStack stack = create_stack();
  
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);

    print_stack(&stack);

    pop(&stack);
    pop(&stack);

    print_stack(&stack);

    free_stack(&stack);

    return 0;
}