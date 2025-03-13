/*
 * Chapter 7, Project 8 – 12-Hour Input Flight Schedule Finder
 * -------------------------------------------------------------
 * This program modifies Programming Project 8 from Chapter 5 so that the user may
 * enter a time using the 12-hour clock. The input will have the form hours:minutes
 * followed by either A, P, AM, or PM (in either upper- or lower-case). White space
 * between the numerical time and the AM/PM indicator is allowed but not required.
 *
 * Process:
 * --------
 *  1. The user is prompted to enter a 12-hour time (e.g., "1:15 PM").
 *  2. The program reads the hour, minute, and a single character representing AM/PM.
 *  3. The program converts the 12-hour time to a 24-hour time:
 *       - If the time is PM and the hour is not 12, add 12.
 *       - If the time is AM and the hour is 12, set the hour to 0.
 *  4. The converted time (in minutes since midnight) is compared to a list of
 *     predefined flight departure times (and corresponding arrival times).
 *  5. The program displays the closest departure time (and its arrival time) in
 *     12-hour format with an appropriate AM/PM indicator.
 *
 * Example Run:
 * ------------
 *  Enter a 12-hour time (e.g., 1:15 PM): 1:15 PM
 *  Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Note:
 * -----
 * - The program assumes that the input is valid and in one of the expected forms.
 */

 #include <stdio.h>

 int main(void) {
     // Departure times in minutes since midnight
     int dep1 = 8 * 60 + 0;      // 8:00 a.m.
     int dep2 = 9 * 60 + 43;     // 9:43 a.m.
     int dep3 = 11 * 60 + 19;    // 11:19 a.m.
     int dep4 = 12 * 60 + 47;    // 12:47 p.m.
     int dep5 = 14 * 60 + 0;     // 2:00 p.m.
     int dep6 = 15 * 60 + 45;    // 3:45 p.m.
     int dep7 = 19 * 60 + 0;     // 7:00 p.m.
     int dep8 = 21 * 60 + 45;    // 9:45 p.m.
 
     // Arrival times in minutes since midnight
     int arr1 = 10 * 60 + 16;    // 10:16 a.m.
     int arr2 = 11 * 60 + 52;    // 11:52 a.m.
     int arr3 = 13 * 60 + 31;    // 1:31 p.m.
     int arr4 = 15 * 60 + 0;     // 3:00 p.m.
     int arr5 = 16 * 60 + 8;     // 4:08 p.m.
     int arr6 = 17 * 60 + 55;    // 5:55 p.m.
     int arr7 = 21 * 60 + 20;    // 9:20 p.m.
     int arr8 = 23 * 60 + 58;    // 11:58 p.m.
 
     int hour, minute, user_time, closest_dep, closest_arr;
     char am_pm;  // To store the AM/PM indicator (only one character will be read)
 
     // Prompt the user to enter a 12-hour time
     printf("Enter a 12-hour time (e.g., 1:15 PM): ");
     scanf("%d:%d %c", &hour, &minute, &am_pm);
 
     // Convert the 12-hour input time to 24-hour format
     if (am_pm == 'P' || am_pm == 'p') {
         if (hour != 12) {
             hour += 12;
         }
     } else if (am_pm == 'A' || am_pm == 'a') {
         if (hour == 12) {
             hour = 0;
         }
     }
 
     // Convert the input time to minutes since midnight
     user_time = hour * 60 + minute;
 
     // Determine the closest departure and corresponding arrival times using midpoints
     if (user_time <= (dep1 + (dep2 - dep1) / 2)) {
         closest_dep = dep1;
         closest_arr = arr1;
     } else if (user_time <= (dep2 + (dep3 - dep2) / 2)) {
         closest_dep = dep2;
         closest_arr = arr2;
     } else if (user_time <= (dep3 + (dep4 - dep3) / 2)) {
         closest_dep = dep3;
         closest_arr = arr3;
     } else if (user_time <= (dep4 + (dep5 - dep4) / 2)) {
         closest_dep = dep4;
         closest_arr = arr4;
     } else if (user_time <= (dep5 + (dep6 - dep5) / 2)) {
         closest_dep = dep5;
         closest_arr = arr5;
     } else if (user_time <= (dep6 + (dep7 - dep6) / 2)) {
         closest_dep = dep6;
         closest_arr = arr6;
     } else if (user_time <= (dep7 + (dep8 - dep7) / 2)) {
         closest_dep = dep7;
         closest_arr = arr7;
     } else {
         closest_dep = dep8;
         closest_arr = arr8;
     }
 
     // Convert the closest departure and arrival times to 12-hour format for display
     int dep_hour = closest_dep / 60;
     int dep_minute = closest_dep % 60;
     int arr_hour = closest_arr / 60;
     int arr_minute = closest_arr % 60;
 
     // Print the closest departure and arrival times in 12-hour format
     printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s\n",
            dep_hour % 12 == 0 ? 12 : dep_hour % 12, dep_minute, dep_hour >= 12 ? "p.m." : "a.m.",
            arr_hour % 12 == 0 ? 12 : arr_hour % 12, arr_minute, arr_hour >= 12 ? "p.m." : "a.m.");
 
     return 0;
 }
 