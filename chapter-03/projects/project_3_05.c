/*
 * Chapter 3, Project 5 – Magic Square Checker
 * --------------------------------------------
 * This program prompts the user to enter 16 numbers (in any order)
 * and then displays them in a **4x4 grid format**.
 *
 * The program calculates:
 *  - **Row sums**
 *  - **Column sums**
 *  - **Diagonal sums**
 *
 * If all sums are equal, the numbers form a **magic square**.
 *
 * Input Format:
 * -------------
 *  - User enters **16 integers** in any order.
 *
 * Output Format:
 * --------------
 *  - Displays the numbers in a **4x4 grid**.
 *  - Computes and prints **row, column, and diagonal sums**.
 *
 * Example Run:
 * ------------
 *  Enter the numbers from 1 to 16 in any order:
 *  16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 *
 *  16  3  2 13
 *   5 10 11  8
 *   9  6  7 12
 *   4 15 14  1
 *
 *  Row sums:    34  34  34  34
 *  Column sums: 34  34  34  34
 *  Diagonal sums: 34  34
 *
 * Notes:
 * ------
 *  - The program correctly calculates **individual sums**.
 *  - If all sums match, the user entered a **magic square**.
 */

 #include <stdio.h>

 int main(void)
 {
     // Declare variables to store the 16 numbers entered by the user
     int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
 
     // Prompt the user to enter 16 numbers in any order
     printf("Enter the numbers from 1 to 16 in any order: ");
     scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
           &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8,
           &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
 
     printf("\n"); // Blank line for readability
 
     // Display the numbers in a 4x4 grid format
     printf("%2d %2d %2d %2d\n", n1, n2, n3, n4);
     printf("%2d %2d %2d %2d\n", n5, n6, n7, n8);
     printf("%2d %2d %2d %2d\n", n9, n10, n11, n12);
     printf("%2d %2d %2d %2d\n", n13, n14, n15, n16);
 
     printf("\n"); // Blank line for readability
 
     // Calculate row sums
     int row_sums1 = n1 + n2 + n3 + n4;
     int row_sums2 = n5 + n6 + n7 + n8;
     int row_sums3 = n9 + n10 + n11 + n12;
     int row_sums4 = n13 + n14 + n15 + n16;
 
     // Calculate column sums
     int col_sums1 = n1 + n5 + n9 + n13;
     int col_sums2 = n2 + n6 + n10 + n14;
     int col_sums3 = n3 + n7 + n11 + n15;
     int col_sums4 = n4 + n8 + n12 + n16;
 
     // Calculate diagonal sums
     int diag1 = n1 + n6 + n11 + n16;  // Top-left to bottom-right
     int diag2 = n4 + n7 + n10 + n13;  // Top-right to bottom-left
 
     // Display row sums
     printf("Row sums:    %2d  %2d  %2d  %2d\n", row_sums1, row_sums2, row_sums3, row_sums4);
 
     // Display column sums
     printf("Column sums: %2d  %2d  %2d  %2d\n", col_sums1, col_sums2, col_sums3, col_sums4);
 
     // Display diagonal sums
     printf("Diagonal sums: %2d  %2d\n", diag1, diag2);
 
     return 0; // End of program
 }
 