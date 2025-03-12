/*
 * Chapter 3, Exercise 4 – Understanding scanf Input Processing
 * -------------------------------------------------------------
 * This exercise examines how `scanf("%d%f%d", &i, &x, &j);` processes input.
 *
 * Key Concepts:
 *  - `%d` reads an integer.
 *  - `%f` reads a floating-point number.
 *  - `scanf` ignores whitespace between inputs but stops reading a number when
 *    it encounters an incompatible character (e.g., `.` for an integer).
 *
 * Given Input:
 * ------------
 * User enters: `"10.3 5 6"`
 *
 * Step-by-Step Processing:
 * -------------------------
 * 1️⃣ `%d` reads `10` → Stored in `i` (stops before `.`).
 * 2️⃣ `%f` reads `.3` (since `%d` stopped) → Stored in `x` as `0.3`.
 * 3️⃣ `%d` reads `5` → Stored in `j`.
 * 4️⃣ Remaining input (`6`) is ignored because `scanf` has processed all variables.
 *
 * Final Variable Values:
 * ----------------------
 * - `i = 10`
 * - `x = 0.3`
 * - `j = 5`
 *
 * Summary:
 *  - The `.` prevents `%d` from reading the full `10.3`, so `10` goes into `i`, and `.3` goes into `x`.
 *  - `scanf` automatically skips whitespace.
 *  - The `6` remains unread because all format specifiers are used.
 */

 #include <stdio.h>

 int main(void) {
     int i, j;
     float x;
 
     // Simulating the behavior with input
     printf("Enter values: ");
     scanf("%d%f%d", &i, &x, &j);
 
     // Display results
     printf("i = %d\n", i);
     printf("x = %.1f\n", x);
     printf("j = %d\n", j);
 
     return 0;
 }
 