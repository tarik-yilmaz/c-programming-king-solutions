/*
 * Chapter 3, Project 1 – Date Format Converter
 * ---------------------------------------------
 * This program converts a user-inputted date from `mm/dd/yyyy` format
 * to `yyyymmdd` format for easy processing.
 *
 * Input Format:
 * -------------
 *  - User enters a date in `mm/dd/yyyy` format (e.g., `2/17/2011`).
 *
 * Output Format:
 * --------------
 *  - Displays the date in `yyyymmdd` format (e.g., `20110217`).
 *
 * Example:
 * --------
 *  Enter a date (mm/dd/yyyy): 2/17/2011
 *  You entered the date: 20110217
 */

 #include <stdio.h>

 int main(void) {
     int day, month, year;
 
     // Prompt the user to enter a date in mm/dd/yyyy format
     printf("Enter a date (mm/dd/yyyy): ");
     scanf("%d/%d/%d", &month, &day, &year);
 
     // Output the date in yyyymmdd format, ensuring two-digit month and day
     printf("You entered the date: %d%02d%02d\n", year, month, day);
 
     return 0; // End of program
 }
 