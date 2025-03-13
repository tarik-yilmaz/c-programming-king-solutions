/*
 * Chapter 8, Exercise 11 – Checker Board Array
 * -------------------------------------------
 * This program declares an 8 x 8 char array named checker_board and uses nested loops
 * to fill the array with a checker board pattern:
 *
 * B R B R B R B R 
 * R B R B R B R B
 * B R B R B R B R 
 * R B R B R B R B
 * B R B R B R B R 
 * R B R B R B R B
 * B R B R B R B R 
 * R B R B R B R B
 *
 * Explanation:
 * ------------
 * - The checker board is represented as an 8x8 char array.
 * - 'B' represents a black square and 'R' represents a red square.
 * - The pattern alternates on each row.
 * - The value of (i + j) is used to determine the color:
 *     - If (i + j) is even, assign 'B'.
 *     - If (i + j) is odd, assign 'R'.
 * - The program then prints the checker board for verification.
 */

 #include <stdio.h>

 int main(void) {
     // Declare an 8 x 8 char array for the checker board.
     char checker_board[8][8];
 
     // Populate the array using nested loops.
     for (int i = 0; i < 8; i++) {       // Iterate over rows.
         for (int j = 0; j < 8; j++) {   // Iterate over columns.
             if ((i + j) % 2 == 0) {
                 checker_board[i][j] = 'B'; // Assign 'B' for even sum.
             } else {
                 checker_board[i][j] = 'R'; // Assign 'R' for odd sum.
             }
         }
     }
 
     // Print the checker board.
     printf("Checker Board:\n");
     for (int i = 0; i < 8; i++) {       // Iterate over rows.
         for (int j = 0; j < 8; j++) {   // Iterate over columns.
             printf("%c ", checker_board[i][j]);
         }
         printf("\n");
     }
 
     return 0;
 }
 