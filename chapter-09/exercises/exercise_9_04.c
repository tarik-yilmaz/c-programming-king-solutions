/*
 * Chapter 9, Exercise 4 – Computing the Day of the Year
 * -----------------------------------------------------
 * Implement a function `day_of_year(month, day, year)` that calculates the 
 * corresponding day of the year for a given date. The function should return 
 * an integer between `1` and `366`, accounting for leap years.
 *
 * Algorithm:
 * ----------
 * - Store the number of days in each month using an array.
 * - Sum the days of all previous months before `month`.
 * - Add the current `day` to this sum.
 * - If the year is a leap year and the date is **after February**, add 1 extra day.
 *
 * Leap Year Check:
 * ----------------
 * A year is a **leap year** if:
 * - It is divisible by `4` AND **not** divisible by `100`, OR
 * - It is divisible by `400`.
 *
 * Example Runs:
 * -------------
 * Enter a date (month day year): 3 15 2024
 * Output: Day of the year: 75
 *
 * Enter a date (month day year): 12 31 2023
 * Output: Day of the year: 365
 *
 * Corrected Function:
 * -------------------
 */

 #include <stdio.h>

 // Function to check if a year is a leap year
 int is_leap_year(int year) {
     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
 }
 
 // Function to compute the day of the year
 int day_of_year(int month, int day, int year) {
     int total_days = 0;
 
     // Number of days in each month (regular year)
     int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
     // Add days from previous months
     for (int i = 0; i < month - 1; i++) {
         total_days += days_in_month[i];
     }
 
     // Add 1 extra day if it's a leap year and the date is after February
     if (is_leap_year(year) && month > 2) {
         total_days += 1;
     }
     
     // Add current day of the month
     total_days += day;
     
     return total_days;
 }
 
 // Test the function
 int main() {
     int month, day, year;
 
     // Prompt user for input
     printf("Enter a date (month day year): ");
     scanf("%d %d %d", &month, &day, &year);
 
     // Compute and print the day of the year
     printf("Day of the year: %d\n", day_of_year(month, day, year));
 
     return 0;
 }
 
 /*
  * Explanation:
  * ------------
  * - The function calculates the total number of days passed since January 1st.
  * - If the year is a leap year, an additional day is added if the date is after February.
  * - The `main()` function prompts the user for input and displays the computed result.
  *
  * Expected Output:
  * ----------------
  * Enter a date (month day year): 3 15 2024
  * Day of the year: 75
  *
  * Enter a date (month day year): 12 31 2023
  * Day of the year: 365
  *
  * Now, the function correctly computes the day of the year, including leap years!
  */
 