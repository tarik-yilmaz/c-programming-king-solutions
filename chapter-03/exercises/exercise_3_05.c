/*
 * Chapter 3, Exercise 5 – Understanding scanf Input Processing
 * -------------------------------------------------------------
 * This exercise examines how `scanf("%f%d%f", &x, &i, &y);` processes input.
 *
 * Key Concepts:
 *  - `%f` reads a floating-point number.
 *  - `%d` reads an integer.
 *  - `scanf` stops reading at **non-matching characters**, affecting input parsing.
 *
 * Given Input:
 * ------------
 * User enters: `"12.3 45.6 7.89"`
 *
 * Step-by-Step Processing:
 * -------------------------
 * 1️⃣ `%f` reads `12.3` → Stored in `x`.
 * 2️⃣ `%d` reads `45` (the integer part of `45.6`) → Stored in `i`.
 * 3️⃣ The decimal (`.`) and `6` remain unprocessed in the input buffer.
 * 4️⃣ `%f` reads `6.0` (leftover from `45.6`) → Stored in `y`.
 * 5️⃣ The remaining `"7.89"` is **ignored** because `scanf` has processed all variables.
 *
 * Final Variable Values:
 * ----------------------
 * - `x = 12.3`
 * - `i = 45`
 * - `y = 6.0`
 *
 * Summary:
 *  - `%d` stops reading at a **decimal point**, leaving part of `45.6` unprocessed.
 *  - `%f` then picks up the `6`, making `y = 6.0` instead of `7.89`.
 */

 #include <stdio.h>

 int main(void) {
     float x, y;
     int i;
 
     // Simulating the behavior with input
     printf("Enter values: ");
     scanf("%f%d%f", &x, &i, &y);
 
     // Display results
     printf("x = %.1f\n", x);
     printf("i = %d\n", i);
     printf("y = %.1f\n", y);
 
     return 0;
 }
 