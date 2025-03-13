/*
 * Chapter 8, Project 3 – Repeated Digit Detector for Multiple Numbers
 * --------------------------------------------------------------------
 * This program is a modification of the repdigit.c program from Section 8.1.
 * It allows the user to enter multiple numbers to be tested for repeated digits.
 * The program terminates when the user enters a number that is less than or equal to 0.
 *
 * Process:
 * --------
 * 1. The program repeatedly prompts the user to enter a number.
 * 2. For each entered number (n > 0), it processes the number digit by digit.
 *    - An array, digit_count, tracks the number of occurrences of each digit (0–9).
 *    - (Optionally, boolean arrays digit_seen and digit_repeated may be used to track
 *      digits that have been encountered.)
 * 3. After processing the number, the program prints a table with two rows:
 *      - The first row lists the digits 0 through 9.
 *      - The second row lists the corresponding occurrences.
 * 4. The loop terminates when the user enters a number <= 0.
 *
 * Example Run:
 * ------------
 *  Enter a number (or <= 0 to quit): 41271092
 *  Digit:       0 1 2 3 4 5 6 7 8 9
 *  Occurrences: 1 2 2 0 1 0 0 1 0 1
 *
 *  Enter a number (or <= 0 to quit): -1
 *  Program terminated.
 */

 #include <stdbool.h>
 #include <stdio.h>
 
 int main(void) {
     bool digit_seen[10];       // Tracks whether each digit (0–9) has been seen
     bool digit_repeated[10];   // Tracks whether a digit is repeated (optional)
     int digit_count[10];       // Counts the occurrences of each digit (0–9)
     long n;                    // The number entered by the user
 
     while (1) {
         // Prompt the user to enter a number
         printf("Enter a number (or <= 0 to quit): ");
         scanf("%ld", &n);
 
         // Terminate the program if n is less than or equal to 0
         if (n <= 0) {
             break;
         }
 
         // Reset the tracking arrays for the current number
         for (int i = 0; i < 10; i++) {
             digit_seen[i] = false;
             digit_repeated[i] = false;
             digit_count[i] = 0;
         }
 
         // Process each digit of the number
         long temp = n;
         while (temp > 0) {
             int digit = temp % 10;  // Extract the last digit
             digit_count[digit]++;   // Increment the count for this digit
             if (digit_seen[digit]) { // If the digit has been seen before,
                 digit_repeated[digit] = true; // mark it as repeated (optional)
             }
             digit_seen[digit] = true; // Mark the digit as seen
             temp /= 10;               // Remove the last digit
         }
 
         // Print the results: a table showing the digit and its occurrence count.
         printf("Digit:       ");
         for (int i = 0; i < 10; i++) {
             printf("%d ", i);
         }
         printf("\n");
 
         printf("Occurrences: ");
         for (int i = 0; i < 10; i++) {
             printf("%d ", digit_count[i]);
         }
         printf("\n");
     }
 
     printf("Program terminated.\n");
     return 0;
 }
 