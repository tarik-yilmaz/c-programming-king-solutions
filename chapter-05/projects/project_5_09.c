/*
 * Chapter 5, Project 9 – Date Comparison
 * --------------------------------------
 * This program prompts the user to enter two dates in the format mm/dd/yy and then
 * determines which date comes earlier on the calendar.
 *
 * Input Format:
 * -------------
 *  - The user is prompted to enter two dates in the format mm/dd/yy.
 *
 * Output Format:
 * --------------
 *  - The program displays which date is earlier.
 *  - If both dates are the same, it indicates so.
 *
 * Example Run:
 * ------------
 *  Enter first date (mm/dd/yy): 3/6/08
 *  Enter second date (mm/dd/yy): 5/17/07
 *  05/17/07 is earlier than 03/06/08
 *
 * Notes:
 * ------
 * - The dates are compared by year first, then by month, and finally by day.
 * - If the dates are identical, the program prints a message indicating they are the same.
 */

 #include <stdio.h>

 int main(void) {
     // Variables to store the two dates
     int month1, day1, year1, month2, day2, year2;
 
     // Input the first date
     printf("Enter first date (mm/dd/yy): ");
     scanf("%d/%d/%d", &month1, &day1, &year1);
 
     // Input the second date
     printf("Enter second date (mm/dd/yy): ");
     scanf("%d/%d/%d", &month2, &day2, &year2);
 
     // Check if the two dates are the same
     if (year1 == year2 && month1 == month2 && day1 == day2) {
         printf("The dates are the same: %02d/%02d/%02d\n", month1, day1, year1);
     } 
     // Check if the first date is earlier
     else if (year1 < year2 || (year1 == year2 && (month1 < month2 || 
                 (month1 == month2 && day1 < day2)))) {
         printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                month1, day1, year1, month2, day2, year2);
     } 
     // If neither of the above conditions is true, the second date is earlier
     else {
         printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                month2, day2, year2, month1, day1, year1);
     }
 
     return 0; // End of program
 }
 
 /*
 // Example Inputs/Outputs:
 // -----------------------
 // Input: 3/6/08 and 5/17/07
 // Output: 05/17/07 is earlier than 03/06/08
 */
 