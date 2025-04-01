/* Chapter 11, Project 2.
 *
 * Modify Programming Project 8 from Chapter 5 so that it includes the following function:
 *
 * void find_closest_flight (int desired_time, int *departure_time, int *arrival_time);
 *
 * This function finds the flight whose departure time is closest to desired_time
 * (expressed in minutes since midnight). It stores the departure and arrival times
 * of this flight (also expressed in minutes since midnight) in the variables pointed
 * to by departure_time and arrival_time, respectively.
 */

#include <stdio.h>

// Function that finds the closest flight to the user's desired time
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    // Departure times in minutes since midnight
    int departures[] = {
        8 * 60 + 0,   // 08:00
        9 * 60 + 43,  // 09:43
        11 * 60 + 19, // 11:19
        12 * 60 + 47, // 12:47
        14 * 60 + 0,  // 14:00
        15 * 60 + 45, // 15:45
        19 * 60 + 0,  // 19:00
        21 * 60 + 45  // 21:45
    };

    // Arrival times corresponding to the departure times
    int arrivals[] = {
        10 * 60 + 16, // 10:16
        11 * 60 + 52, // 11:52
        13 * 60 + 31, // 13:31
        15 * 60 + 0,  // 15:00
        16 * 60 + 8,  // 16:08
        17 * 60 + 55, // 17:55
        21 * 60 + 20, // 21:20
        23 * 60 + 58  // 23:58
    };

    // Midpoints between departure times to find closest one
    int midpoints[] = {
        (departures[0] + departures[1]) / 2,
        (departures[1] + departures[2]) / 2,
        (departures[2] + departures[3]) / 2,
        (departures[3] + departures[4]) / 2,
        (departures[4] + departures[5]) / 2,
        (departures[5] + departures[6]) / 2,
        (departures[6] + departures[7]) / 2};

    if (desired_time <= midpoints[0])
    {
        *departure_time = departures[0];
        *arrival_time = arrivals[0];
    }
    else if (desired_time <= midpoints[1])
    {
        *departure_time = departures[1];
        *arrival_time = arrivals[1];
    }
    else if (desired_time <= midpoints[2])
    {
        *departure_time = departures[2];
        *arrival_time = arrivals[2];
    }
    else if (desired_time <= midpoints[3])
    {
        *departure_time = departures[3];
        *arrival_time = arrivals[3];
    }
    else if (desired_time <= midpoints[4])
    {
        *departure_time = departures[4];
        *arrival_time = arrivals[4];
    }
    else if (desired_time <= midpoints[5])
    {
        *departure_time = departures[5];
        *arrival_time = arrivals[5];
    }
    else if (desired_time <= midpoints[6])
    {
        *departure_time = departures[6];
        *arrival_time = arrivals[6];
    }
    else
    {
        *departure_time = departures[7];
        *arrival_time = arrivals[7];
    }
}

// Converts minutes since midnight to 12-hour format and prints the result
void print_time(int minutes)
{
    int hour = minutes / 60;
    int min = minutes % 60;
    printf("%d:%02d %s", hour % 12 == 0 ? 12 : hour % 12, min, hour >= 12 ? "p.m." : "a.m.");
}

int main(void)
{
    int hour, minute;
    int desired_time;
    int departure, arrival;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);
    desired_time = hour * 60 + minute;

    find_closest_flight(desired_time, &departure, &arrival);

    printf("Closest departure time is ");
    print_time(departure);
    printf(", arriving at ");
    print_time(arrival);
    printf(".\n");

    return 0;
}
