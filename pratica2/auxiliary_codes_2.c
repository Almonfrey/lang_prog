#include <stdio.h>
#include <time.h>

// Function to calculate the execution time of a boolean expression 
// using 'and' operator without short-circuiting
void test_and_no_short_circuit() {
    clock_t start_time = clock(); // initial time

    // Boolean expression without short-circuiting
    int a = 5;
    int b = 10;
    if (a == 5 & b == 10) {
        printf("True expression\n");
    }

    clock_t end_time = clock();
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution time without short-circuit: %f seconds\n", elapsed_time);
}

// Function to calculate the execution time of a boolean expression
// using 'and' operator with short-circuiting
void test_and_short_circuit() {
    clock_t start_time = clock(); 

    // Boolean expression with short-circuiting
    int a = 5;
    int b = 10;
    if (a == 5 && b == 10) {
        printf("True expression\n");
    }

    clock_t end_time = clock(); 
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution time with short-circuit: %f seconds\n", elapsed_time);
}

int main() {
    // Test the function without short-circuiting
    test_and_no_short_circuit();

    // Test the function with short-circuiting
    test_and_short_circuit();

    return 0;
}
