/*
 * Chapter 3, Exercise 2 – Formatting Floats with printf
 * ------------------------------------------------------
 * This program demonstrates different printf format specifiers
 * to display a floating-point number (`x`) in various formats.
 *
 * Key Formatting Concepts:
 *  - `%-8.1e` → Left-justified, exponential notation, 1 digit after the decimal.
 *  - `%10.6e` → Right-justified, exponential notation, 6 digits after the decimal.
 *  - `%-8.3f` → Left-justified, fixed-point notation, 3 digits after the decimal.
 *  - `%6.0f`  → Right-justified, fixed-point notation, no decimal digits.
 *
 * Expected Output (for x = 123.456):
 * ----------------------------------
 * (a)  "1.2e+02  "  (Left-aligned, exponential, 1 digit after decimal)
 * (b)  "1.234560e+02" (Right-aligned, exponential, 6 digits after decimal)
 * (c)  "123.456 "  (Left-aligned, fixed-point, 3 digits after decimal)
 * (d)  "   123"    (Right-aligned, fixed-point, no decimal digits)
 */

 #include <stdio.h>

 int main(void) {
     float x = 123.456; // Example float value
 
     // (a) Exponential notation; left-justified, field width 8, one decimal digit
     printf("%-8.1e\n", x);
 
     // (b) Exponential notation; right-justified, field width 10, six decimal digits
     printf("%10.6e\n", x);
 
     // (c) Fixed decimal notation; left-justified, field width 8, three decimal digits
     printf("%-8.3f\n", x);
 
     // (d) Fixed decimal notation; right-justified, field width 6, no decimal digits
     printf("%6.0f\n", x);
 
     return 0;
 }
 