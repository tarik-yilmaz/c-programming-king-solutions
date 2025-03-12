/*
 * Chapter 4, Exercise 8 – Alternative UPC Check Digit Formula
 * ------------------------------------------------------------
 * This exercise examines whether the `upc.c` program would still work correctly
 * if we replace:
 * 
 *   ✅ **Original Expression:**   `9 - ((total - 1) % 10)`
 *   ✅ **Proposed Replacement:** `(10 - (total % 10)) % 10`
 *
 * Answer:
 * -------
 * ✅ **Yes**, the program would still work correctly with the replacement.
 * ✅ **Both expressions are mathematically equivalent** and produce the same check digit.
 *
 * Explanation:
 * ------------
 * 1️⃣ **Original expression:** `9 - ((total - 1) % 10)`
 *    - Step 1: Subtract `1` from the total, ensuring totals **divisible by 10** are handled correctly.
 *    - Step 2: Compute the **remainder** of the adjusted total divided by `10`.
 *    - Step 3: **Subtract the remainder from `9`** to calculate the check digit.
 *
 * 2️⃣ **Replacement expression:** `(10 - (total % 10)) % 10`
 *    - Step 1: Compute the **remainder** of `total` divided by `10` (`total % 10`).
 *    - Step 2: **Subtract the remainder from `10`** (if the remainder is `0`, this step gives `10`).
 *    - Step 3: Take the result **modulo `10`** to ensure the check digit is valid (`0–9`).
 *
 * Equivalence:
 * ------------
 * ✅ Both expressions correctly handle cases where `total` is **divisible by 10**:
 *    - **Original:** If `total % 10 == 0`, then `9 - ((total - 1) % 10) = 0`.
 *    - **Replacement:** If `total % 10 == 0`, then `(10 - (total % 10)) % 10 = 0`.
 * ✅ Both handle **all other cases identically**, meaning they **always produce the same check digit**.
 *
 * Example Calculations:
 * ----------------------
 * ✅ **Case 1: total = 70**
 * - **Original:**   `9 - ((70 - 1) % 10) = 9 - (69 % 10) = 9 - 9 = 0`
 * - **Replacement:** `(10 - (70 % 10)) % 10 = (10 - 0) % 10 = 0`
 *
 * ✅ **Case 2: total = 73**
 * - **Original:**   `9 - ((73 - 1) % 10) = 9 - (72 % 10) = 9 - 2 = 7`
 * - **Replacement:** `(10 - (73 % 10)) % 10 = (10 - 3) % 10 = 7`
 *
 * Conclusion:
 * -----------
 * ✅ The `upc.c` program **would still work correctly** with the proposed replacement.
 * ✅ The two expressions are **mathematically equivalent**, and either formula can be used.
 */
