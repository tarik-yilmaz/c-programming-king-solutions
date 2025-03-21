/*
 * Chapter 9, Exercise 13 – Chess Position Evaluator
 * --------------------------------------------------
 * This program defines a function `evaluate_position` that analyzes the material balance
 * on a chessboard represented as an 8x8 character array.
 *
 * White pieces are represented by uppercase letters: K, Q, R, B, N, P  
 * Black pieces are represented by lowercase letters: k, q, r, b, n, p
 *
 * Piece values used for evaluation:
 *   - Queen (Q/q) = 9
 *   - Rook  (R/r) = 5
 *   - Bishop (B/b) and Knight (N/n) = 3
 *   - Pawn  (P/p) = 1
 *   - King  (K/k) = 0 (not counted for material)
 *
 * The function returns the difference between White's and Black's material value:
 *   - Positive if White is ahead
 *   - Negative if Black is ahead
 *   - Zero if equal
 *
 * Example Use:
 * ------------
 *  - Given a sample board, the function returns the material evaluation.
 */

 #include <stdio.h>

 // Function to evaluate material balance on the chessboard
 int evaluate_position(char board[8][8]) {
     int sum_white = 0, sum_black = 0;
 
     for (int i = 0; i < 8; i++) {
         for (int j = 0; j < 8; j++) {
             switch (board[i][j]) {
                 case 'Q': sum_white += 9; break;
                 case 'q': sum_black += 9; break;
                 case 'R': sum_white += 5; break;
                 case 'r': sum_black += 5; break;
                 case 'B': sum_white += 3; break;
                 case 'b': sum_black += 3; break;
                 case 'N': sum_white += 3; break;
                 case 'n': sum_black += 3; break;
                 case 'P': sum_white += 1; break;
                 case 'p': sum_black += 1; break;
                 // K/k not counted in material
             }
         }
     }
 
     return sum_white - sum_black;
 }
 
 int main() {
     // Example test board
     char board[8][8] = {
         {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
         {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
         {'.', '.', '.', '.', '.', '.', '.', '.'},
         {'.', '.', '.', '.', '.', '.', '.', '.'},
         {'.', '.', '.', '.', '.', '.', '.', '.'},
         {'.', '.', '.', '.', '.', '.', '.', '.'},
         {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
         {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
     };
 
     int result = evaluate_position(board);
 
     printf("Position evaluation (White - Black): %d\n", result);
 
     return 0;
 }
 