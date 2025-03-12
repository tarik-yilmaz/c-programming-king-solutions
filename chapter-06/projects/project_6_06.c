/*
 * Chapter 6, Project 6 – Even Squares Printer
 * --------------------------------------------
 * This program prompts the user to enter a number n, then prints all even squares 
 * between 1 and n.
 *
 * Process:
 * --------
 * - The user is prompted to enter an integer value, n.
 * - The program uses a for loop to iterate through even numbers (starting at 2).
 * - For each even number, the square is calculated.
 * - The loop continues until the square exceeds n.
 *
 * Example Run:
 * ------------
 *  Enter a number: 100
 *  4
 *  16
 *  36
 *  64
 *  100
 *
 * Note:
 * -----
 * - Only even numbers are considered (i.e., i increments by 2).
 * - The squares are printed each on a new line.
 */

 #include <stdio.h>

 int main(void) {
 
     int num, square; // Variables: num for user input, square for storing even squares
 
     // Prompt the user to enter a number
     printf("Enter a number: ");
     scanf("%d", &num);
 
     // Loop through even numbers starting from 2, stopping when the square exceeds num
     for (int i = 2; i * i <= num; i += 2) {
         square = i * i;        // Calculate the square of the current even number
         printf("%d\n", square); // Print the square
     }
 
     return 0; // Indicate successful program termination
 }
 