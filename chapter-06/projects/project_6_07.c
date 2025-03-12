/*
 * Chapter 6, Project 7 – Square Table Generator
 * ---------------------------------------------
 * This program prints a table of squares for a series of numbers.
 *
 * Original Objective:
 * -------------------
 * Rearrange the square3.c program so that the for loop handles the initialization,
 * condition, and update of the variable i, without using any multiplication.
 *
 * Process:
 * --------
 *  - The user is prompted to enter the number of entries for the table.
 *  - The program uses a for loop to print each number (starting from 1) and its square.
 *  - The square is computed incrementally using the identity:
 *        square(i+1) = square(i) + (2*i + 1)
 *    Instead of multiplication, the program maintains an "odd" variable which is
 *    incremented by 2 in each iteration to calculate the next square.
 *
 * Explanation:
 * ------------
 * - The for loop initializes:
 *     i = 1, odd = 3, and square = 1.
 * - On each iteration:
 *     - The current number (i) and its square are printed.
 *     - i is incremented.
 *     - The odd variable is incremented by 2.
 *     - The next square is computed as the current square plus the current odd.
 *
 * Example Run:
 * ------------
 *  This program prints a table of squares.
 *  Enter number of entries in table: 5
 *
 *         1         1
 *         2         4
 *         3         9
 *         4        16
 *         5        25
 */

 #include <stdio.h>

 int main(void) {
 
     int i, n, odd, square; // 'i' for the current entry, 'n' for the total entries,
                            // 'odd' for computing the next square, and 'square' for the current square value.
 
     // Prompt the user for the number of entries in the table
     printf("This program prints a table of squares.\n");
     printf("Enter number of entries in table: ");
     scanf("%d", &n);
 
     // For loop: initialize i, odd, and square; then iterate until i exceeds n.
     for (i = 1, odd = 3, square = 1; i <= n; ++i, odd += 2) {
         // Print the current number and its square in a formatted table
         printf("%10d%10d\n", i, square);
         
         // Calculate the next square value without using multiplication
         square += odd;
     }
 
     return 0; // End of program
 }
 