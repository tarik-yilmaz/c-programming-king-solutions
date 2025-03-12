/*
 * Chapter 6, Exercise 5 – Loop Type Equivalence
 * ----------------------------------------------
 * This exercise asks which one of the following statements is not equivalent
 * (assuming that the loop bodies are the same):
 *
 *   (a) while (i < 10) { ... }
 *   (b) for (; i < 10;) { ... }
 *   (c) do { ... } while (i < 10);
 *
 * Analysis:
 * -----------
 * (a) while (i < 10) { ... }
 *   - The loop condition (i < 10) is checked **before** executing the loop body.
 *   - If i < 10 is false initially, the loop body does not execute at all.
 *
 * (b) for (; i < 10;) { ... }
 *   - This for loop omits initialization and increment sections and behaves like a while loop.
 *   - The condition (i < 10) is checked **before** each iteration.
 *   - Therefore, (a) and (b) are equivalent.
 *
 * (c) do { ... } while (i < 10);
 *   - The do-while loop **executes the loop body at least once** before checking the condition.
 *   - Even if i < 10 is false initially, the loop body is executed once.
 *   - This behavior is different from (a) and (b), where the loop body might never execute.
 *
 * Conclusion:
 * -----------
 * - (a) and (b) are equivalent because both check the condition before execution.
 * - (c) is not equivalent because it guarantees at least one execution of the loop body.
 *
 * Final Answer:
 * -------------
 * Statement (c) is not equivalent to (a) and (b).
 */
