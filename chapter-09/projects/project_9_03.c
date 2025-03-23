/*
 * Chapter 9, Project 3 – Random Walk with Function Modularization
 * ----------------------------------------------------------------
 * This program generates a random walk in a 10x10 grid using the letters A–Z,
 * placing each letter in a randomly chosen adjacent cell (up, down, left, right),
 * as long as the cell is within bounds and hasn't been visited.
 *
 * The program is modularized into two functions:
 *  1. generate_random_walk: fills the grid with '.' and then performs the walk.
 *  2. print_array: displays the grid.
 *
 * The walk stops when all letters A–Z are placed or no valid moves remain.
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 void generate_random_walk(char walk[10][10]) {
     int row = 0, col = 0;
     char letter = 'A';
     int directions[4][2] = {
         {-1, 0},  // Up
         {1, 0},   // Down
         {0, -1},  // Left
         {0, 1}    // Right
     };
 
     // Initialize the grid with '.'
     for (int i = 0; i < 10; i++)
         for (int j = 0; j < 10; j++)
             walk[i][j] = '.';
 
     walk[row][col] = letter++; // Place 'A' at the starting position
 
     srand((unsigned) time(NULL)); // Seed RNG
 
     while (letter <= 'Z') {
         int available_moves = 0;
         int valid_directions[4];
 
         // Check all 4 directions
         for (int d = 0; d < 4; d++) {
             int new_row = row + directions[d][0];
             int new_col = col + directions[d][1];
 
             if (new_row >= 0 && new_row < 10 &&
                 new_col >= 0 && new_col < 10 &&
                 walk[new_row][new_col] == '.') {
                 valid_directions[available_moves++] = d;
             }
         }
 
         if (available_moves == 0)
             break; // No more valid moves
 
         // Choose a valid random direction
         int selected_direction = valid_directions[rand() % available_moves];
         row += directions[selected_direction][0];
         col += directions[selected_direction][1];
         walk[row][col] = letter++;
     }
 }
 
 void print_array(char walk[10][10]) {
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
             printf("%c ", walk[i][j]);
         }
         printf("\n");
     }
 }
 
 int main(void) {
     char walk[10][10];
 
     generate_random_walk(walk);
     print_array(walk);
 
     return 0;
 }
 