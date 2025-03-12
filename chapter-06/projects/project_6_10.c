/*
 * Chapter 6, Project 10 – Earliest Date Finder
 * --------------------------------------------
 * This program generalizes the date comparison program so that the user can
 * enter any number of dates. The user will repeatedly enter dates (in mm/dd/yy format)
 * until entering 0/0/0, which indicates that no more dates will be entered.
 * The program then displays the earliest date entered.
 *
 * Process:
 * --------
 *  1. The program first prompts the user to enter a date.
 *  2. The first date is used to initialize the "earliest" date.
 *  3. The program then enters a loop, prompting the user to enter additional dates.
 *  4. The loop terminates when the user enters 0/0/0.
 *  5. During each iteration, the newly entered date is compared to the current earliest date.
 *     If the new date comes earlier, it updates the earliest date.
 *
 * Example Run:
 * ------------
 *  Enter a date (mm/dd/yy): 03/06/08
 *  Enter a date (mm/dd/yy): 05/17/07
 *  Enter a date (mm/dd/yy): 06/03/03
 *  Enter a date (mm/dd/yy): 0/0/0
 *  05/17/07 is the earliest date
 *
 * Note:
 * -----
 * - Dates are compared first by year, then month, then day.
 * - The dates are displayed in the format mm/dd/yy with leading zeros.
 */

 #include <stdio.h>

 int main(void) {
     int month, day, year; // Variables for the current date input
     int earliest_month, earliest_day, earliest_year; // Variables to track the earliest date
 
     // Prompt the user for the first date
     printf("Enter a date (mm/dd/yy): ");
     scanf("%d/%d/%d", &month, &day, &year);
 
     // Initialize the earliest date with the first input
     earliest_month = month;
     earliest_day = day;
     earliest_year = year;
 
     // Loop to read additional dates until the user enters 0/0/0
     while (1) {
         printf("Enter a date (mm/dd/yy): ");
         scanf("%d/%d/%d", &month, &day, &year);
 
         // Exit the loop if the user enters 0/0/0
         if (month == 0 && day == 0 && year == 0) {
             break;
         }
 
         // Compare the new date with the current earliest date:
         // First by year, then by month, then by day.
         if (year < earliest_year || 
            (year == earliest_year && month < earliest_month) || 
            (year == earliest_year && month == earliest_month && day < earliest_day)) {
             earliest_month = month;
             earliest_day = day;
             earliest_year = year;
         }
     }
 
     // Print the earliest date in mm/dd/yy format with leading zeros
     printf("%02d/%02d/%02d is the earliest date\n", earliest_month, earliest_day, earliest_year);
 
     return 0;
 }
 