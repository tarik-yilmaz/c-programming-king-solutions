/*
 * Chapter 5, Exercise 7 – Absolute Value Using Ternary Operator
 * --------------------------------------------------------------
 * This exercise evaluates the following `printf` statement:
 *
 * printf("%d\n", i >= 0 ? i : -i);
 *
 * Question:
 * ----------
 * - What does this statement print when `i = 17`?
 * - What does it print when `i = -17`?
 *
 * Explanation:
 * ------------
 * ✅ **This statement prints the absolute value of `i`**.
 * - The conditional (ternary) operator `? :` determines whether `i` is **non-negative or negative**:
 *   - If `i >= 0`, it prints `i` as it is.
 *   - Otherwise, it prints `-i`, which converts `i` to its positive equivalent.
 *
 * ✅ **Breaking down the ternary expression**:
 * ```
 * i >= 0 ? i : -i
 * ```
 * - If `i >= 0` is **true**, return `i`.
 * - If `i >= 0` is **false**, return `-i` (the positive equivalent).
 *
 * Behavior:
 * ---------
 * 1️⃣ If `i = 17`:
 *    - `i >= 0` is **true** (`17 >= 0`).
 *    - The true branch executes, printing `17`.
 *    - ✅ **Output: "17"**
 *
 * 2️⃣ If `i = -17`:
 *    - `i >= 0` is **false** (`-17 >= 0` is false).
 *    - The false branch executes, printing `-(-17)`, which is `17`.
 *    - ✅ **Output: "17"**
 */

 #include <stdio.h>

 int main(void) {
     int i; // Variable for user input
 
     // Prompt user for an integer
     printf("Enter an integer: ");
     scanf("%d", &i);
 
     // Print absolute value using ternary operator
     printf("Absolute value: %d\n", i >= 0 ? i : -i);
 
     return 0; // End of program
 }
 
 /*
  * Example Runs:
  * -------------
  * Input: 17
  * Output: Absolute value: 17 ✅ (correct)
  *
  * Input: -17
  * Output: Absolute value: 17 ✅ (correct)
  */
 
 /*
  * Key Takeaways:
  * --------------
  * ✅ The **ternary operator (`? :`)** is a compact alternative to `if-else` for simple conditions.
  * ✅ This statement effectively **computes the absolute value of `i`**.
  * ✅ Works for both positive and negative values of `i`.
  */
 