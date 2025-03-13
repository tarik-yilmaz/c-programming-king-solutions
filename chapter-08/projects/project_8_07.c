/*
 * Chapter 8, Project 7 – Row and Column Sums of a 5x5 Array
 * -----------------------------------------------------------
 * This program reads a 5x5 array of integers from the user and then computes
 * and prints the sums of each row and each column.
 *
 * Process:
 * --------
 * 1. The program prompts the user to enter each of the 5 rows of the array.
 * 2. It calculates the row totals by summing the elements of each row.
 * 3. It calculates the column totals by summing the elements of each column.
 * 4. The results are printed in a formatted table.
 *
 * Example Run:
 * ------------
 *  Enter row 1: 8 3 9 0 10
 *  Enter row 2: 3 5 17 1 1
 *  Enter row 3: 2 8 6 23 1
 *  Enter row 4: 15 7 3 2 9
 *  Enter row 5: 6 14 2 6 0
 *
 *  Row totals: 30 27 40 36 28
 *  Column totals: 34 37 37 32 21
 */

 #include <stdio.h>

 int main(void) {
     int arr[5][5] = {0};  // 5x5 array to hold integer values
     int sum_row, sum_col; // Variables for row and column sums
 
     // Input the 5x5 array, one row at a time
     for (int i = 0; i < 5; i++) {
         printf("Enter row %d: ", i + 1);
         scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
     }
     printf("\n");
 
     // Calculate and print row totals
     printf("Row totals:    ");
     for (int i = 0; i < 5; i++) {
         sum_row = 0; // Reset row sum for each row
         for (int j = 0; j < 5; j++) {
             sum_row += arr[i][j];
         }
         printf("%d ", sum_row);
     }
     printf("\n");
 
     // Calculate and print column totals
     printf("Column totals: ");
     for (int j = 0; j < 5; j++) {
         sum_col = 0; // Reset column sum for each column
         for (int i = 0; i < 5; i++) {
             sum_col += arr[i][j];
         }
         printf("%d ", sum_col);
     }
     printf("\n");
 
     return 0;
 }
 