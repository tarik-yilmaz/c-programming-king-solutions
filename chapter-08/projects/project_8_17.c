/*
 * Chapter 8, Project 17 – Magic Square Generator
 * -----------------------------------------------
 * This program generates an n x n magic square where the sums of the rows,
 * columns, and diagonals are all the same. The user is prompted to enter an odd
 * number n (between 1 and 99), and the magic square is constructed in a 2D array.
 *
 * Method:
 * -------
 * 1. Start by placing the number 1 in the middle of row 0.
 * 2. For each subsequent number 2, 3, ..., n^2, move up one row and right one column.
 *    - If the move goes out of bounds, wrap around to the opposite side.
 *    - If the target cell is already occupied, move down one cell from the last position.
 *
 * Example Run:
 * ------------
 *  Enter size of magic square (odd number between 1 and 99): 5
 *
 *         17   24    1    8   15
 *         23    5    7   14   16
 *          4    6   13   20   22
 *         10   12   19   21    3
 *         11   18   25    2    9
 *
 * Note:
 * -----
 * - This program uses variable-length arrays, which require a C99 compiler or later.
 */

 #include <stdio.h>

 int main(void) {
     int n;
 
     // Prompt for a valid odd number between 1 and 99
     do {
         printf("Enter size of magic square (odd number between 1 and 99): ");
         scanf("%d", &n);
         if (n < 1 || n > 99 || n % 2 == 0) {
             printf("Invalid input! Please enter an odd number between 1 and 99.\n");
         }
     } while (n < 1 || n > 99 || n % 2 == 0);
 
     // Declare the magic square array with n rows and n columns
     int magic[n][n];
 
     // Initialize the array with zeros
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
             magic[i][j] = 0;
         }
     }
 
     // Start at the middle of the first row (row 0, column n/2)
     int row = 0, col = n / 2;
     magic[row][col] = 1;
 
     // Place numbers 2 to n^2 using the magic square algorithm
     for (int num = 2; num <= n * n; num++) {
         int next_row = (row - 1 + n) % n; // Move up one row, wrap around if needed
         int next_col = (col + 1) % n;     // Move right one column, wrap around if needed
 
         // If the next cell is already occupied, move down one row from the current cell
         if (magic[next_row][next_col] != 0) {
             row = (row + 1) % n;
         } else {
             row = next_row;
             col = next_col;
         }
         magic[row][col] = num;
     }
 
     // Print the magic square
     printf("\nMagic Square of size %d:\n", n);
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
             printf("%4d", magic[i][j]);
         }
         printf("\n");
     }
 
     return 0;
 }
 