/*
 * Chapter 8, Project 9 – Random Walk Across a 10x10 Array
 * --------------------------------------------------------
 * This program simulates a random walk across a 10x10 grid. The grid is initially 
 * filled with dots ('.'). The program randomly moves from one cell to another, 
 * always moving one step up, down, left, or right. As it visits each cell, it 
 * marks the cell with successive letters from A to Z.
 *
 * Process:
 * --------
 *  1. Initialize a 10x10 array with dots.
 *  2. Start at the top-left corner (0,0) and place 'A'.
 *  3. Repeatedly choose a random direction (up, down, left, or right).
 *  4. Check that the move stays within the grid and that the target cell is unvisited.
 *  5. If the move is valid, update the position, place the next letter, and reset the 
 *     count of unsuccessful moves.
 *  6. If all four directions are blocked, the program terminates.
 *  7. The walk continues until the letter 'Z' is placed or no valid moves remain.
 *
 * Example (if the walk terminates prematurely):
 *
 *   A B G H I . . . . .
 *   . C F . J K . . . .
 *   . D E . M L . . . .
 *   . . . . N O . . . .
 *   . . W X Y P Q . . .
 *   . . V U T S R . . .
 *   . . . . . . . . . .
 *   . . . . . . . . . .
 *   . . . . . . . . . .
 *   . . . . . . . . . .
 *
 * In this case, when all four directions from the current cell are blocked,
 * the program terminates.
 */

 #include <stdio.h>
 #include <time.h>
 #include <stdlib.h>
 
 int main(void) {
     char arr[10][10];      // 10x10 grid for the random walk
     int current_row = 0, current_col = 0; // Starting position (0,0)
     char next_letter = 'A';  // Start with letter 'A'
 
     // Seed the random number generator with the current time
     srand((unsigned) time(NULL));
 
     // Initialize the grid with dots
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
             arr[i][j] = '.';
         }
     }
 
     // Place the first letter 'A' at the starting position
     arr[current_row][current_col] = next_letter;
 
     // Define possible moves: up, down, left, right
     int directions[4][2] = {
         {-1, 0}, // Up
         {1, 0},  // Down
         {0, -1}, // Left
         {0, 1}   // Right
     };
 
     int moves_tried = 0; // Count of unsuccessful move attempts
 
     // Perform the random walk until 'Z' is placed or no valid moves remain
     while (next_letter < 'Z') {
         int random_direction = rand() % 4; // Randomly choose a direction
 
         // Calculate the new potential position
         int new_row = current_row + directions[random_direction][0];
         int new_col = current_col + directions[random_direction][1];
 
         // Check if the move is valid (inside grid and unvisited)
         if (new_row >= 0 && new_row < 10 && new_col >= 0 && new_col < 10 &&
             arr[new_row][new_col] == '.') {
             // Valid move: update position and place the next letter
             current_row = new_row;
             current_col = new_col;
             next_letter++;
             arr[current_row][current_col] = next_letter;
             moves_tried = 0; // Reset unsuccessful move counter
         } else {
             // Invalid move: increment counter
             moves_tried++;
         }
 
         // If all 4 directions are blocked, terminate the walk
         if (moves_tried >= 4) {
             printf("No more valid moves. Terminating...\n");
             break;
         }
     }
 
     // Print the final grid
     printf("Final grid:\n");
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
             printf("%c ", arr[i][j]);
         }
         printf("\n");
     }
 
     return 0;
 }
 