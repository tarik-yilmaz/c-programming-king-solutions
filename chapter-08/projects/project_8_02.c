/*
 * Chapter 8, Project 2 – Digit Occurrence Counter
 * -----------------------------------------------
 * This program modifies the repdigit.c program so that it prints a table showing how many times
 * each digit (0–9) appears in a number entered by the user.
 *
 * Process:
 * --------
 *  1. The program reads a long integer from the user.
 *  2. It processes the number digit by digit (from rightmost to leftmost).
 *  3. It maintains an array, digit_count, to count the occurrences of each digit.
 *  4. The program then prints a table with two rows:
 *         - The first row shows the digits 0 through 9.
 *         - The second row shows the corresponding counts.
 *
 * Example Run:
 * ------------
 *  Enter a number: 41271092
 *  Digit:       0 1 2 3 4 5 6 7 8 9
 *  Occurrences: 1 2 2 0 1 0 0 1 0 1
 */

 #include <stdbool.h>
 #include <stdio.h>
 
 int main(void) {
     bool digit_seen[10] = {false};       // Tracks whether each digit has been seen (optional)
     bool digit_repeated[10] = {false};     // Tracks whether a digit is repeated (optional)
     int digit_count[10] = {0};             // Counts occurrences of each digit (0-9)
     int digit;                           // Current digit extracted from the number
     long n;                              // The number to be processed
 
     // Prompt the user to enter a number
     printf("Enter a number: ");
     scanf("%ld", &n);
 
     // Process each digit of the number
     while (n > 0) {
         digit = n % 10;         // Extract the last digit
         digit_count[digit]++;   // Increment the count for this digit
         if (digit_seen[digit]) {
             digit_repeated[digit] = true; // (Optional) Mark as repeated if already seen
         }
         digit_seen[digit] = true; // Mark the digit as seen
         n /= 10;                // Remove the last digit from n
     }
 
     // Print the header row of the table
     printf("Digit:       ");
     for (int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
     printf("\n");
 
     // Print the occurrences row
     printf("Occurrences: ");
     for (int i = 0; i < 10; i++) {
         printf("%d ", digit_count[i]);
     }
     printf("\n");
 
     return 0;
 }
 