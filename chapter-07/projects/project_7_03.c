/*
 * Chapter 7, Project 3 – Summing a Series of double Values
 * ---------------------------------------------------------
 * This program is a modification of the sum2.c program from Section 7.1. It
 * sums a series of floating-point numbers (double values) entered by the user.
 *
 * Process:
 * --------
 * 1. The user is prompted to enter a series of numbers.
 * 2. The input terminates when the user enters 0.
 * 3. The program adds each entered number to a running total (sum).
 * 4. Finally, it prints the total sum.
 *
 * Example Run:
 * ------------
 *  This program sums a series of floating-point numbers.
 *  Enter numbers (0 to terminate): 3.5 2.1 -1.2 0
 *  The sum is: 4.40
 *
 * Note:
 * -----
 * - The correct format specifier for double values in scanf and printf is %lf.
 */

 #include <stdio.h>

 int main(void) {
     
     double n, sum = 0;  // Variables for the current input (n) and the running total (sum)
 
     // Prompt the user to enter a series of numbers (terminate by entering 0)
     printf("This program sums a series of floating-point numbers.\n");
     printf("Enter numbers (0 to terminate): ");
 
     // Read the first number
     scanf("%lf", &n);
     
     // Continue reading and summing numbers until 0 is entered
     while (n != 0) {
         sum += n;
         scanf("%lf", &n);
     }
     
     // Display the total sum
     printf("The sum is: %lf\n", sum);
 
     return 0; // End of program
 }
 