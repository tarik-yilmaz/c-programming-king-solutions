/*
 * Chapter 7, Project 2 – Square Table with Pause
 * -----------------------------------------------
 * This program prints a table of squares for a given number of entries. It pauses 
 * after every 24 rows and prompts the user to press Enter to continue.
 *
 * Process:
 * --------
 * 1. The user is prompted to enter the number of entries in the table.
 * 2. The program flushes the input buffer to clear any leftover newline characters.
 * 3. It prints a table of squares (each row shows a number and its square).
 * 4. After every 24 rows, the program displays "Press Enter to continue..." and waits
 *    for the user to press Enter before continuing.
 *
 * Example Run:
 * ------------
 *  Enter number of entries in table: 50
 *         1         1
 *         2         4
 *         ...
 *        24       576
 *
 *  Press Enter to continue...
 *         25       625
 *         ...
 *         50      2500
 *
 * Note:
 * -----
 * - The getchar loop is used both to flush the input buffer after scanf and to wait for 
 *   the user to press Enter.
 */

 #include <stdio.h>

 int main(void) {
     int i, n;
 
     // Print program description and prompt for the number of entries
     printf("This program prints a table of squares.\n");
     printf("Enter number of entries in table: ");
     scanf("%d", &n);
     
     // Flush the input buffer to remove the newline left by scanf
     while (getchar() != '\n');
     
     // Loop to print the table of squares
     for (i = 1; i <= n; i++) {
         printf("%10d%10d\n", i, i * i);
         
         // Pause every 24 rows
         if (i % 24 == 0) {
             printf("\nPress Enter to continue...");
             while (getchar() != '\n');  // Wait for the user to press Enter
         }
     }
 
     return 0;  // End of program
 }
 