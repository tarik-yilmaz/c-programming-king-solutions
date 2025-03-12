/*
 * Chapter 4, Exercise 7 – UPC Check Digit Calculation
 * ---------------------------------------------------
 * This exercise explains **why a simplified technique for computing the UPC check digit**
 * does not work.
 *
 * Original Algorithm:
 * -------------------
 *  1. **Subtract 1** from the total.
 *  2. Compute the **remainder** when the adjusted total is divided by `10`.
 *  3. **Subtract the remainder from `9`** to obtain the check digit.
 *
 * Simplified (Incorrect) Algorithm:
 * ---------------------------------
 *  1. Compute the **remainder** when the total is divided by `10`.
 *  2. **Subtract the remainder from `10`** to obtain the check digit.
 *
 * Why Doesn't the Simplified Technique Work?
 * ------------------------------------------
 * - The simplified method **fails when the total is already divisible by `10`**.
 * - In the **original algorithm**:
 *   - Subtracting `1` before computing the remainder ensures that **totals divisible by `10`**
 *     yield a check digit of `0`, which is correct.
 * - In the **simplified technique**:
 *   - If the total is **already divisible by `10`**, the remainder is `0`.
 *   - Subtracting `0` from `10` gives a check digit of `10`, which is **invalid**.
 *
 * Example to Illustrate the Issue:
 * --------------------------------
 *  ✅ **Original Algorithm** (Correct)
 *  - **Total = `70`**  
 *    1. Subtract `1`: `70 - 1 = 69`
 *    2. Compute remainder: `69 % 10 = 9`
 *    3. Subtract from `9`: `9 - 9 = 0`
 *    ✅ **Check digit = `0`** (Correct)
 *
 *  ❌ **Simplified Algorithm** (Incorrect)
 *  - **Total = `70`**  
 *    1. Compute remainder: `70 % 10 = 0`
 *    2. Subtract from `10`: `10 - 0 = 10`
 *    ❌ **Check digit = `10`** (Incorrect)
 *
 * Final Answer:
 * -------------
 * ✅ The **simplified technique fails** because it **doesn't correctly handle cases where
 * the total is divisible by `10`**.
 * ✅ The **original algorithm ensures** that such cases produce a **check digit of `0`**,
 * while the simplified method incorrectly gives **`10`**, which is invalid.
 */
