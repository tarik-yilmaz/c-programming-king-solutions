/*
 * Chapter 8, Project 4 – Reverse Array Using a Macro for Array Size
 * ---------------------------------------------------------------
 * This program reverses a series of numbers stored in an array. It modifies the
 * reverse.c program of Section 8.1 to use the expression
 *      (int)(sizeof(a) / sizeof(a[0]))
 * (or a macro that computes this value) to determine the array length.
 *
 * Process:
 * --------
 *  1. The program declares an array 'a' of 10 integers.
 *  2. It uses a macro, ARRAY_SIZE(a), to compute the number of elements in the array.
 *  3. The user is prompted to enter the specified number of integers.
 *  4. The program then prints the array elements in reverse order.
 *
 * Example Run:
 * ------------
 *  Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10
 *  In reverse order: 10 9 8 7 6 5 4 3 2 1
 */

 #include <stdio.h>

 #define ARRAY_SIZE(a) ((int)(sizeof(a) / sizeof(a[0])))
 
 int main(void) {
     int a[10], i;
 
     // Calculate the number of elements in the array using the ARRAY_SIZE macro
     int size = ARRAY_SIZE(a);
 
     // Prompt the user to enter 'size' number of integers
     printf("Enter %d numbers: ", size);
     for (i = 0; i < size; i++) {
         scanf("%d", &a[i]);
     }
 
     // Print the array elements in reverse order
     printf("In reverse order:");
     for (i = size - 1; i >= 0; i--) {
         printf(" %d", a[i]);
     }
     printf("\n");
 
     return 0;
 }
 