/*
 * Chapter 8, Exercise 10 – Chess Board Declaration and Display
 * -------------------------------------------------------------
 * This program declares an 8 x 8 char array named chess_board that represents
 * a chess board with pieces and empty squares. The initializer fills the array
 * with the following layout:
 *
 *   r n b q k b n r
 *   p p p p p p p p
 *     .   .   .   .
 *   .   .   .   .
 *     .   .   .   .
 *   .   .   .   .
 *   P P P P P P P P
 *   R N B Q K B N R
 *
 * In this representation:
 * - Lowercase letters represent black pieces.
 * - Uppercase letters represent white pieces.
 * - Spaces (' ') and dots ('.') alternate to represent empty squares.
 *
 * The program then prints the chess board for verification.
 */

 #include <stdio.h>

 int main(void) {
     // Declaration and initialization of the chess_board array
     char chess_board[8][8] = {
         {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}, // Black pieces
         {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, // Black pawns
         {' ', '.', ' ', '.', ' ', '.', ' ', '.'}, // Empty row 1
         {'.', ' ', '.', ' ', '.', ' ', '.', ' '}, // Empty row 2
         {' ', '.', ' ', '.', ' ', '.', ' ', '.'}, // Empty row 3
         {'.', ' ', '.', ' ', '.', ' ', '.', ' '}, // Empty row 4
         {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, // White pawns
         {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}  // White pieces
     };
 
     // Print the chess board
     printf("Chess Board:\n");
     for (int i = 0; i < 8; i++) {
         for (int j = 0; j < 8; j++) {
             printf("%c ", chess_board[i][j]);
         }
         printf("\n");
     }
 
     return 0;
 }
 
 /*
  * Explanation:
  * ------------
  * - The chess_board array is declared as an 8 x 8 char array.
  * - Each row is initialized with 8 characters representing a row on the board.
  * - The first row represents black pieces (r, n, b, q, k, b, n, r).
  * - The second row contains black pawns.
  * - Rows 3 to 6 alternate spaces and dots to represent empty squares.
  * - The seventh row contains white pawns.
  * - The eighth row represents white pieces (R, N, B, Q, K, B, N, R).
  *
  * Output:
  * -------
  * Chess Board:
  * r n b q k b n r 
  * p p p p p p p p 
  *   .   .   .   . 
  * .   .   .   . 
  *   .   .   .   . 
  * .   .   .   . 
  * P P P P P P P P 
  * R N B Q K B N R 
  */
 