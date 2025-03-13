/*
 * Chapter 7, Project 9 – 12-Hour to 24-Hour Time Converter
 * ---------------------------------------------------------
 * This program asks the user to enter a time in 12-hour format and then
 * converts and displays the equivalent time in 24-hour format.
 *
 * Input Format:
 * -------------
 *  - The user enters a time in the format "hour:minute" followed by an AM/PM indicator.
 *    Examples: "9:11 PM", "9:11 pm", "9:11 P", etc.
 *
 * Process:
 * --------
 *  1. The program reads the hour, minute, and a single character (A/P) that indicates
 *     whether the time is AM or PM.
 *  2. If the time is PM and the hour is not 12, 12 is added to the hour.
 *  3. If the time is AM and the hour is 12, the hour is converted to 0 (midnight).
 *  4. The time is then displayed in 24-hour format using a two-digit representation for hours and minutes.
 *
 * Example Run:
 * ------------
 *  Enter a 12-hour time (e.g., 9:11 AM or PM): 9:11 PM
 *  Equivalent 24-hour time: 21:11
 *
 * Note:
 * -----
 * - The program assumes that the input is valid and in one of the expected forms.
 */

 #include <stdio.h>

 int main(void) {
     int hour, minute;
     char am_pm; // Single character to store A or P
 
     // Prompt the user to enter the time in 12-hour format
     printf("Enter a 12-hour time (e.g., 9:11 AM or PM): ");
     scanf("%d:%d %c", &hour, &minute, &am_pm);
 
     // Convert the 12-hour time to 24-hour format
     if (am_pm == 'P' || am_pm == 'p') { // For PM times
         if (hour != 12) {
             hour += 12; // Add 12 to hour unless it's already 12 PM
         }
     } else if (am_pm == 'A' || am_pm == 'a') { // For AM times
         if (hour == 12) {
             hour = 0; // Convert 12 AM (midnight) to 0
         }
     }
 
     // Print the equivalent 24-hour time with two-digit formatting
     printf("Equivalent 24-hour time: %02d:%02d\n", hour, minute);
 
     return 0;
 }
 