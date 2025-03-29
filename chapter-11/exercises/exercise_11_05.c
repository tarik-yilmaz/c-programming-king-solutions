/*
 * Chapter 11, Exercise 6
 *
 * Write a function that splits the total number of seconds since midnight into
 * hours, minutes, and seconds.
 */

#include <stdio.h>

/*
 * Converts a total number of seconds since midnight into hours (0–23),
 * minutes (0–59), and seconds (0–59).
 */
void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = (total_sec % 3600) / 60;
    *sec = total_sec % 60;
}

int main(void)
{
    long seconds;
    int hr, min, sec;

    printf("Enter seconds since midnight: ");
    scanf("%ld", &seconds);

    split_time(seconds, &hr, &min, &sec);

    printf("Time: %02d:%02d:%02d\n", hr, min, sec);

    return 0;
}
