/*
 * Chapter 6, Exercise 4 – Comparison of for Loop Variants
 * --------------------------------------------------------
 * This exercise asks which one of the following statements is not equivalent to the other two
 * (assuming that the loop bodies are the same):
 *
 * (a) for (i = 0; i < 10; i++) ...
 * (b) for (i = 0; i < 10; ++i) ...
 * (c) for (i = 0; i++ < 10; ) ...
 *
 * Analysis:
 * -----------
 * (a) and (b):
 * - Both initialize i = 0 and check the condition i < 10.
 * - In (a), i++ is used as the increment; in (b), ++i is used.
 * - In both cases, the increment occurs **after** the loop body executes.
 * - Therefore, the loop body sees i values from 0 to 9 in both cases.
 *
 * (c):
 * - Initializes i = 0.
 * - The condition i++ < 10 uses the post-increment operator:
 *   - The condition is evaluated with the current value of i, then i is incremented.
 *   - Thus, when the loop body executes, i has already been incremented.
 * - As a result, the loop body in (c) sees i values from 1 to 10 instead of 0 to 9.
 *
 * Conclusion:
 * -----------
 * Statement (c) is not equivalent to (a) and (b) because the loop body in (c) executes
 * with i ranging from 1 to 10, rather than 0 to 9.
 *
 * Final Answer:
 * -------------
 * Statement (c) is not equivalent to (a) and (b).
 */
