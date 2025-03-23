/*
 * Chapter 9, Project 5 – Magic Square Generator (Function Version)
 * ----------------------------------------------------------------
 * This program generates a magic square of a specified odd size `n` using two functions:
 *
 *     void create_magic_square(int n, char magic_square[n][n]);
 *     void print_magic_square(int n, char magic_square[n][n]);
 *
 * - The user is prompted to enter an odd number between 1 and 99.
 * - The `create_magic_square` function fills the grid using the standard
 *   "Siamese method" for generating odd-order magic squares.
 * - The `print_magic_square` function prints the square in a formatted output.
 *
 * NOTE:
 * --------
 * Although the array is declared as `char magic_square[n][n]`, this works correctly
 * only as long as all the values (from 1 to n^2) fit into a `char`. This means:
 * - Signed `char` typically allows values from -128 to 127
 * - So this is safe only for n such that n^2 ≤ 127 (e.g., n ≤ 11)
 * - For full safety with large n, consider changing the type to `int`
 */

 #include <stdio.h>

 void create_magic_square(int n, char magic_square[n][n]) {
     // Initialize all cells to 0
     for (int row = 0; row < n; row++) {
         for (int col = 0; col < n; col++) {
             magic_square[row][col] = 0;
         }
     }
 
     int row = 0;
     int col = n / 2;
     magic_square[row][col] = 1;
 
     for (char num = 2; num <= n * n; num++) {
         int next_row = (row - 1 + n) % n;
         int next_col = (col + 1) % n;
 
         if (magic_square[next_row][next_col] != 0) {
             row = (row + 1) % n;
         } else {
             row = next_row;
             col = next_col;
         }
 
         magic_square[row][col] = num;
     }
 }
 
 void print_magic_square(int n, char magic_square[n][n]) {
     printf("\nMagic Square of size %d:\n\n", n);
     for (int row = 0; row < n; row++) {
         for (int col = 0; col < n; col++) {
             printf("%4d", magic_square[row][col]);
         }
         printf("\n");
     }
 }
 
 int main(void) {
     int n;
 
     // Prompt the user for an odd number between 1 and 99
     do {
         printf("Enter size of magic square (odd number between 1 and 99): ");
         scanf("%d", &n);
 
         if (n < 1 || n > 99 || n % 2 == 0) {
             printf("Invalid input! Please enter an odd number between 1 and 99.\n");
         }
     } while (n < 1 || n > 99 || n % 2 == 0);
 
     char magic_square[n][n]; // Safe only if n^2 ≤ 127 (due to char limits)
 
     create_magic_square(n, magic_square);
     print_magic_square(n, magic_square);
 
     return 0;
 }
 