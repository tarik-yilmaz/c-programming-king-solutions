/*
 * Chapter 5, Project 8 – Flight Schedule Finder
 * ----------------------------------------------
 * This program asks the user to enter a time (using the 24-hour clock), then
 * displays the departure and arrival times for the flight whose departure time is
 * closest to the entered time.
 *
 * Process:
 * --------
 *  1. The user input is converted into minutes since midnight.
 *  2. The departure times (and corresponding arrival times) are predefined,
 *     also in minutes since midnight.
 *  3. The program compares the user time with the departure times by using
 *     midpoints between successive departures.
 *  4. The flight with the closest departure time is selected, and its corresponding
 *     arrival time is displayed.
 *
 * Example Run:
 * ------------
 *  Enter a 24-hour time: 13:15
 *  Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Departure and Arrival Times:
 * ----------------------------
 *  - dep1: 8:00 a.m.   = 8 * 60 + 0    = 480 minutes     → arr1: 10:16 a.m. = 616 minutes
 *  - dep2: 9:43 a.m.   = 9 * 60 + 43   = 583 minutes     → arr2: 11:52 a.m. = 712 minutes
 *  - dep3: 11:19 a.m.  = 11 * 60 + 19  = 679 minutes     → arr3: 1:31 p.m.  = 811 minutes
 *  - dep4: 12:47 p.m.  = 12 * 60 + 47  = 767 minutes     → arr4: 3:00 p.m.  = 900 minutes
 *  - dep5: 2:00 p.m.   = 14 * 60 + 0   = 840 minutes     → arr5: 4:08 p.m.  = 968 minutes
 *  - dep6: 3:45 p.m.   = 15 * 60 + 45  = 945 minutes     → arr6: 5:55 p.m.  = 1075 minutes
 *  - dep7: 7:00 p.m.   = 19 * 60 + 0   = 1140 minutes    → arr7: 9:20 p.m.  = 1280 minutes
 *  - dep8: 9:45 p.m.   = 21 * 60 + 45  = 1305 minutes    → arr8: 11:58 p.m. = 1438 minutes
 *
 * Note:
 * -----
 * - To convert a time to minutes since midnight: total_minutes = hour * 60 + minute.
 * - The program uses midpoints between departure times to determine the closest flight.
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
 
     int hour, minute, user_time;    // Variables for user input and conversion to minutes
     int closest_dep, closest_arr;   // Variables for closest departure and arrival times
 
     // Prompt the user to enter a 24-hour time
     printf("Enter a 24-hour time: ");
     scanf("%d:%d", &hour, &minute);
 
     // Convert the user time to minutes since midnight
     user_time = hour * 60 + minute;
 
     // Determine the closest departure and corresponding arrival times
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
 
     // Convert the closest departure and arrival times to hours and minutes for display
     int dep_hour = closest_dep / 60;
     int dep_minute = closest_dep % 60;
     int arr_hour = closest_arr / 60;
     int arr_minute = closest_arr % 60;
 
     // Print the closest departure and arrival times in 12-hour format with AM/PM
     printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s\n",
            dep_hour % 12 == 0 ? 12 : dep_hour % 12, dep_minute, dep_hour >= 12 ? "p.m." : "a.m.",
            arr_hour % 12 == 0 ? 12 : arr_hour % 12, arr_minute, arr_hour >= 12 ? "p.m." : "a.m.");
 
     return 0;
 }
 