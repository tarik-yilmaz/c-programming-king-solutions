/*
 * Chapter 8, Project 10 – Closest Departure Time Using Arrays
 * ------------------------------------------------------------
 * This program modifies Programming Project 8 from Chapter 5 so that the departure times
 * are stored in one array and the arrival times in another array. The times are given as
 * integers representing the number of minutes since midnight.
 *
 * The program:
 *  1. Prompts the user to enter a time in HH:MM format.
 *  2. Converts the entered time to minutes since midnight.
 *  3. Searches the array of departure times to find the one closest to the user-entered time.
 *  4. Displays the closest departure time along with the corresponding arrival time.
 *
 * Example Run:
 * ------------
 *  Enter your arrival time: HH:MM  (e.g., 13:15)
 *  Closest departure time is 12:47, arriving at 15:00
 *
 * Note:
 * -----
 * - The departure times and arrival times are stored in two parallel arrays.
 * - The program uses the absolute difference between the user time and each departure time
 *   to determine the closest departure.
 */

 #include <stdio.h>
 #include <stdlib.h>  // For abs function
 
 int main(void) {
     // Arrays for departure and arrival times (in minutes since midnight)
     int departures[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
     int arrivals[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
     
     int hour, minute, user_time;
     
     // Prompt the user to enter a time in 24-hour format (HH:MM)
     printf("Enter your arrival time (HH:MM): ");
     scanf("%d:%d", &hour, &minute);
     
     // Convert the entered time to minutes since midnight
     user_time = hour * 60 + minute;
     
     // Find the closest departure time
     int closest_index = 0;
     int smallest_difference = abs(user_time - departures[0]);
     int num_departures = sizeof(departures) / sizeof(departures[0]);
     
     for (int i = 0; i < num_departures; i++) {
         int difference = abs(user_time - departures[i]);
         if (difference < smallest_difference) {
             smallest_difference = difference;
             closest_index = i;
         }
     }
     
     // Convert the closest departure and corresponding arrival times to hours and minutes
     int dep_hour = departures[closest_index] / 60;
     int dep_minute = departures[closest_index] % 60;
     int arr_hour = arrivals[closest_index] / 60;
     int arr_minute = arrivals[closest_index] % 60;
     
     // Print the closest departure and arrival times in 24-hour format
     printf("Closest departure time is %02d:%02d, arriving at %02d:%02d\n",
            dep_hour, dep_minute, arr_hour, arr_minute);
     
     return 0;
 }
 