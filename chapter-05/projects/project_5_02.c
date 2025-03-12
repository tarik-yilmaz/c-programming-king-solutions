/*
 * Chapter 5, Project 2 – 24-Hour to 12-Hour Time Converter
 * ----------------------------------------------------------
 * This program prompts the user for a time in 24-hour format and then
 * converts and displays it in 12-hour format.
 *
 * Input Format:
 * -------------
 *  - The user enters a time in the format HH:MM (e.g., 21:11).
 *
 * Output Format:
 * --------------
 *  - The program prints the equivalent 12-hour time with an appropriate AM/PM suffix.
 *  - Special care is taken to correctly display midnight (0:00) as 12:00 AM and noon (12:00) as 12:00 PM.
 *
 * Example Run:
 * ------------
 *  Enter a 24-hour time: 21:11
 *  Equivalent 12-hour time: 9:11 PM
 */

 #include <stdio.h>

 int main(void) {
     int hour, minute; // Variables to store the input time in 24-hour format
 
     // Prompt the user to enter a time in 24-hour format
     printf("Enter a 24-hour time: ");
     scanf("%d:%d", &hour, &minute);
 
     // Convert the 24-hour time to 12-hour format and display it
     if (hour == 0) {
         // Midnight case: 0 hour in 24-hour format is 12 AM in 12-hour format
         printf("Equivalent 12-hour time: 12:%02d AM\n", minute);
     } else if (hour == 12) {
         // Noon case: 12 hour in 24-hour format is 12 PM in 12-hour format
         printf("Equivalent 12-hour time: 12:%02d PM\n", minute);
     } else if (hour > 12) {
         // PM case: Convert hours greater than 12 to 12-hour format
         hour -= 12;
         printf("Equivalent 12-hour time: %d:%02d PM\n", hour, minute);
     } else {
         // AM case: Hours less than 12 remain unchanged in 12-hour format
         printf("Equivalent 12-hour time: %d:%02d AM\n", hour, minute);
     }
 
     return 0; // End of program
 }
 
 /*
 // Example Runs:
 // -------------
 // Input: 21:11   → Output: Equivalent 12-hour time: 9:11 PM
 // Input: 00:05   → Output: Equivalent 12-hour time: 12:05 AM
 // Input: 12:00   → Output: Equivalent 12-hour time: 12:00 PM
 // Input: 09:30   → Output: Equivalent 12-hour time: 9:30 AM
 */
 