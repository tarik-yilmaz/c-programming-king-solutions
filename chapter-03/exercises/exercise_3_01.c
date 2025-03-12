/*
 * Chapter 3, Exercise 1 – Understanding printf Formatting
 * --------------------------------------------------------
 * This exercise analyzes the output of different printf format specifiers.
 *
 * Key Formatting Concepts:
 *  - `%6d`  → Right-aligns an integer in a field of width 6.
 *  - `%4d`  → Right-aligns an integer in a field of width 4.
 *  - `%12.5e` → Exponential notation with a width of 12 and 5 decimal places.
 *  - `%.4f`  → Fixed-point notation with 4 digits after the decimal point.
 *  - `%-6.2g` → Scientific or floating-point notation with 2 significant digits, left-aligned in width 6.
 *
 * Expected Output:
 * ----------------
 * (a) printf("%6d,%4d\n", 86, 1040);
 *     Output: "    86,1040"
 *     - `86` is right-aligned in a field of width 6 (4 spaces before it).
 *     - `1040` is right-aligned in a field of width 4 (no extra spaces).
 *
 * (b) printf("%12.5e\n", 30.253);
 *     Output: "  3.02530e+01"
 *     - `30.253` is formatted in scientific notation with 5 decimal places.
 *     - Right-aligned in a total width of 12 (2 spaces before).
 *
 * (c) printf("%.4f\n", 83.162);
 *     Output: "83.1620"
 *     - `83.162` is formatted as a fixed-point decimal with 4 digits after the decimal.
 *
 * (d) printf("%-6.2g\n", .0000009979);
 *     Output: "1e-06 "
 *     - `.0000009979` is formatted in scientific notation with 2 significant digits.
 *     - Left-aligned in width 6 (1 trailing space).
 */

 #include <stdio.h>

 int main(void) {
     printf("%6d,%4d\n", 86, 1040);
     printf("%12.5e\n", 30.253);
     printf("%.4f\n", 83.162);
     printf("%-6.2g\n", .0000009979);
     return 0;
 }
 