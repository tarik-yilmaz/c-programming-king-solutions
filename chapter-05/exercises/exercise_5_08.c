/*
 * Chapter 5, Exercise 8 – Simplifying an `if` Statement
 * ------------------------------------------------------
 * This exercise simplifies a complex `if` statement into a **single assignment**.
 *
 * Original Code:
 * --------------
 * if (age >= 13)
 *     if (age <= 19)
 *         teenager = true;
 *     else
 *         teenager = false;
 * else if (age < 13)
 *     teenager = false;
 *
 * ✅ **The goal is to simplify this as much as possible.**
 *
 * Simplified Code:
 * ----------------
 * ```c
 * teenager = (age >= 13 && age <= 19);
 * ```
 *
 * Explanation:
 * ------------
 * - The condition `age >= 13 && age <= 19` **directly determines** whether `age` falls within the **teenage range**.
 * - If the condition is **true**, `teenager` is assigned `true`.
 * - If the condition is **false**, `teenager` is assigned `false`.
 * - ✅ **Eliminates redundant `if` statements**, making the code more efficient and readable.
 */

 #include <stdio.h>
 #include <stdbool.h> // Include for boolean support in C
 
 int main(void) {
     int age; // Variable for user input
     bool teenager; // Boolean variable to store the result
 
     // Prompt user for input
     printf("Enter your age: ");
     scanf("%d", &age);
 
     // Assign the result using the simplified condition
     teenager = (age >= 13 && age <= 19);
 
     // Display the result
     if (teenager)
         printf("You are a teenager.\n");
     else
         printf("You are not a teenager.\n");
 
     return 0; // End of program
 }
 
 /*
  * Example Runs:
  * -------------
  * Input: 15
  * Output: You are a teenager. ✅ (correct)
  *
  * Input: 12
  * Output: You are not a teenager. ✅ (correct)
  *
  * Input: 20
  * Output: You are not a teenager. ✅ (correct)
  */
 
 /*
  * Key Takeaways:
  * --------------
  * ✅ The **ternary operator (`? :`)** is **not needed** here since a direct assignment is sufficient.
  * ✅ This method **improves readability** and **eliminates unnecessary nesting**.
  * ✅ **Boolean expressions** can directly assign values without requiring `if-else`.
  */
 