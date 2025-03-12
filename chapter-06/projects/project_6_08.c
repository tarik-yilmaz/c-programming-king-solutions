/*
 * Chapter 6, Project 8 – One-Month Calendar Printer
 * --------------------------------------------------
 * This program prints a one-month calendar. The user specifies the total number
 * of days in the month and the day of the week on which the month begins.
 *
 * Input:
 * -------------
 *  - Number of days in the month (e.g., 31)
 *  - Starting day of the week (1=Sun, 7=Sat; e.g., 3 means Tuesday)
 *
 * Output:
 * --------------
 *  - A formatted calendar for the month with days aligned under their corresponding weekdays.
 *
 * Example Run:
 * ------------
 *  Enter number of days in month: 31
 *  Enter starting day of the week (1=Sun, 7=Sat): 3
 *
 *          1   2   3   4   5
 *  6   7   8   9  10  11  12
 * 13  14  15  16  17  18  19
 * 20  21  22  23  24  25  26
 * 27  28  29  30  31
 *
 * Explanation:
 * ------------
 * - The program first prints leading spaces for days before the first day of the month.
 * - Then, it prints each day from 1 to total_days.
 * - After printing a day, it checks whether the current position completes a week (adjusting for the starting day)
 *   by testing if (i + week_days - 1) is divisible by 7.
 * - A newline is printed whenever a week is complete.
 */

 #include <stdio.h>

 int main(void) {
     int total_days, week_days;
 
     // Prompt the user for the total number of days in the month
     printf("Enter number of days in month: ");
     scanf("%d", &total_days);
 
     // Prompt the user for the starting day of the week (1=Sun, 7=Sat)
     printf("Enter starting day of the week (1=Sun, 7=Sat): ");
     scanf("%d", &week_days);
 
     // Print leading spaces for days before the first day of the month.
     // Each day is printed in a field width of 4 spaces.
     for (int i = 1; i < week_days; i++) {
         printf("    ");
     }
 
     // Loop through all days of the month.
     for (int i = 1; i <= total_days; i++) {
         // Print the current day number, right-aligned in a field of width 2, followed by 2 spaces.
         printf("%2d  ", i);
 
         // Adjust the printed day position by adding the starting day offset.
         // If the adjusted position is divisible by 7, a week is complete.
         if ((i + week_days - 1) % 7 == 0) {
             printf("\n"); // Move to the next line to start a new week.
         }
     }
 
     return 0; // End of program
 }
 