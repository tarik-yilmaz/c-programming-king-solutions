/*
 * Chapter 2, Exercise 6 – Issues with Multiple Adjacent Underscores
 * ------------------------------------------------------------------
 * This discussion explores why using multiple adjacent underscores 
 * (e.g., `current__balance`) in C identifiers is discouraged.
 *
 * Key Issues:
 *  1️⃣ **Reduced Readability**  
 *     - Harder to visually distinguish similar names like `current_balance` vs. `current__balance`.
 *     - Can be easily misread when scanning through code.
 *  
 *  2️⃣ **Error-Prone**  
 *     - Typing mistakes can lead to unintended variable names (`current___balance` vs. `current__balance`).
 *     - Debugging such mistakes is difficult since they aren't syntax errors.
 *  
 *  3️⃣ **Not a Common Convention**  
 *     - Standard C naming conventions favor single underscores (`current_balance`).
 *     - Multiple underscores make code harder to maintain.
 *  
 *  4️⃣ **Conflicts with Reserved Identifiers**  
 *     - Names starting with double underscores (`__name`) or an underscore followed by a capital letter (`_Name`)
 *       are **reserved for system use**.
 *     - Using such names may lead to **unexpected behavior** or conflicts with standard libraries.
 *
 * ✅ **Best Practice:**  
 * Use **single underscores** to separate words in an identifier (e.g., `current_balance`).
 */

