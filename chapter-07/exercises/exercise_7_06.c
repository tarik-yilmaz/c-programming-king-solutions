/*
 * Chapter 7, Exercise 6 – Appropriate Types for Data Items
 * ---------------------------------------------------------
 * For each of the following items of data, the smallest type guaranteed to be
 * large enough is:
 *
 * (a) Days in a month:         char
 *     - Maximum value is 31, which fits in a (signed) char (-128 to 127).
 *
 * (b) Days in a year:          short
 *     - Maximum value is 366 (for a leap year), which does not fit in a char but fits in a short.
 *
 * (c) Minutes in a day:        short
 *     - There are 1440 minutes in a day, which fits in a short (-32,768 to 32,767).
 *
 * (d) Seconds in a day:        int
 *     - There are 86,400 seconds in a day, which exceeds the range of a short but fits in an int.
 */
