/*
 * Chapter 11, Exercise 7 – Day of Year to Date Converter
 * -------------------------------------------------------
 * This program converts a day of the year (e.g., 45) into a month and day,
 * accounting for leap years.
 *
 * Function:
 * ---------
 * void split_date(int day_of_year, int year, int *month, int *day);
 * - Converts the day of the year to a (month, day) format.
 * - Handles leap years by adjusting February to 29 days.
 * - Validates the input range based on whether the year is a leap year.
 *
 * Example:
 * --------
 * Input:
 *   Enter a year: 2024
 *   Enter a day of the year: 60
 * Output:
 *   Your day of the year is: 02.29
 */

#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i = 0;

    if (is_leap_year(year))
    {
        days_in_month[1] = 29;
    }

    while (day_of_year > days_in_month[i])
    {
        day_of_year -= days_in_month[i];
        i++;
    }

    *month = i + 1;
    *day = day_of_year;
}

int main()
{
    int year, day_of_year;
    int month, day;

    printf("Enter a year: ");
    scanf("%d", &year);

    printf("Enter a day of the year: ");
    scanf("%d", &day_of_year);

    int max_day = is_leap_year(year) ? 366 : 365;
    if (day_of_year < 1 || day_of_year > max_day)
    {
        printf("Invalid day of year! Must be between 1 and %d for year %d.\n", max_day, year);
        return 1;
    }

    split_date(day_of_year, year, &month, &day);
    printf("Your day of the year is: %02d.%02d\n", month, day);

    return 0;
}
