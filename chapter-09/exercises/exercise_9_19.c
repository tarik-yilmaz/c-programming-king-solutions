/*
 * Chapter 9, Exercise 19 – Binary Conversion with Recursion
 * ----------------------------------------------------------
 * This program explores a recursive function `pb(int n)` that prints the binary
 * representation of a positive integer.
 *
 * Function Behavior:
 * ------------------
 * - The function uses recursion to divide the number by 2 until it reaches 0.
 * - On the way back (unwinding the recursion), it prints `n % 2` (as '0' or '1').
 * - This results in the binary digits being printed in the correct order.
 *
 * Example:
 * --------
 * Input: 5
 * Output: 101
 *
 * Input: 12
 * Output: 1100
 */

 #include <stdio.h>

 // Recursive function to print binary representation
 void pb(int n) {
     if (n != 0) {
         pb(n / 2);
         putchar('0' + n % 2);
     }
 }
 
 int main() {
     int number;
 
     printf("Enter a positive integer: ");
     scanf("%d", &number);
 
     if (number == 0) {
         putchar('0'); // Special case: binary of 0 is just 0
     } else {
         printf("Binary: ");
         pb(number);
     }
 
     putchar('\n'); // Print newline for clean output
 
     return 0;
 }