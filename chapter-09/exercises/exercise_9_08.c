/*
 * Chapter 9, Exercise 8 – Valid Function Prototypes
 * -------------------------------------------------
 * Which of the following function prototypes are valid for a function that:
 * - Returns **nothing** (`void`).
 * - Has **one** `double` parameter.
 *
 * Evaluation of Prototypes:
 * -------------------------
 * (a) `void f(double x);`    ✅ Legal
 *       - Correct syntax: `void` return type, one `double` parameter (`x`).
 *
 * (b) `void f(double);`      ✅ Legal
 *       - Also valid. The parameter name (`x`) is **optional** in prototypes.
 *
 * (c) `void f(x);`           ❌ Illegal
 *       - Missing **type** for `x`. Every parameter **must** have a declared type.
 *
 * (d) `f(double x);`         ❌ Illegal
 *       - Missing **return type** (`void`). Every function must have an explicit return type.
 *
 * Conclusion:
 * -----------
 * - **Valid prototypes:** (a) and (b).
 * - **Invalid prototypes:** (c) (missing type), (d) (missing return type).
 */
