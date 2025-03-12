/*
 * Chapter 5, Exercise 9 – Equivalence of Two if Statements
 * ---------------------------------------------------------
 * This exercise compares two different `if` statement constructs used for grading
 * based on a variable `score`, and asks if they are equivalent.
 *
 * Code 1:
 * ------------
 * if (score >= 90)
 *     printf("A");
 * else if (score >= 80)
 *     printf("B");
 * else if (score >= 70)
 *     printf("C");
 * else if (score >= 60)
 *     printf("D");
 * else
 *     printf("F");
 *
 * Code 2:
 * ------------
 * if (score < 60)
 *     printf("F");
 * else if (score < 70)
 *     printf("D");
 * else if (score < 80)
 *     printf("C");
 * else if (score < 90)
 *     printf("B");
 * else
 *     printf("A");
 *
 * Explanation:
 * ------------
 * - Both if statement constructs cover all possible ranges of `score` and yield the same output.
 * - **Code 1** starts by checking if the score is in the highest range (>= 90) and then works downward.
 * - **Code 2** starts by checking if the score is in the lowest range (< 60) and works upward.
 * - Although the **order of evaluation** is different, the ranges are **mutually exclusive**.
 *
 * Example Comparison:
 * -------------------
 * For instance, if `score = 85`:
 * - Code 1:
 *     - `score >= 90` is false, then `score >= 80` is true → prints "B".
 * - Code 2:
 *     - `score < 60`, `< 70`, `< 80` are all false, then `score < 90` is true → prints "B".
 *
 * Final Answer:
 * -------------
 * Yes, the two if statements are equivalent. They produce the same result for any input value of `score`, 
 * despite the difference in evaluation order.
 */

 #include <stdio.h>

 int main(void) {
     int score;
 
     // Prompt the user to enter a score
     printf("Enter score: ");
     scanf("%d", &score);
 
     // Code 1 implementation
     if (score >= 90)
         printf("Code 1: A\n");
     else if (score >= 80)
         printf("Code 1: B\n");
     else if (score >= 70)
         printf("Code 1: C\n");
     else if (score >= 60)
         printf("Code 1: D\n");
     else
         printf("Code 1: F\n");
 
     // Code 2 implementation
     if (score < 60)
         printf("Code 2: F\n");
     else if (score < 70)
         printf("Code 2: D\n");
     else if (score < 80)
         printf("Code 2: C\n");
     else if (score < 90)
         printf("Code 2: B\n");
     else
         printf("Code 2: A\n");
 
     return 0; // End of program
 }
 
 /*
 // Key Takeaways:
 // --------------
 // ✅ Both code versions yield the same output for any given `score`.
 // ✅ The difference is only in the **order of evaluation**.
 // ✅ Ensure that the ranges in if statements are **mutually exclusive** to maintain equivalence.
 */
 