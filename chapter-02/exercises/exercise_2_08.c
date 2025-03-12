/*
 * Chapter 2, Exercise 8 – Counting Tokens in a Statement
 * -------------------------------------------------------
 * In C, a token is the smallest unit of a program. Tokens include:
 *  - Identifiers (e.g., variable names)
 *  - Operators (e.g., arithmetic and assignment operators)
 *  - Constants (e.g., numerical values)
 *  - Delimiters (e.g., parentheses, semicolons)
 *
 * Given the statement:
 *    answer = (3 * q - p * p) / 3;
 *
 * Token Breakdown:
 *  1️⃣ `answer`  → Identifier (variable)
 *  2️⃣ `=`       → Assignment operator
 *  3️⃣ `(`       → Left parenthesis
 *  4️⃣ `3`       → Constant
 *  5️⃣ `*`       → Multiplication operator
 *  6️⃣ `q`       → Identifier (variable)
 *  7️⃣ `-`       → Subtraction operator
 *  8️⃣ `p`       → Identifier (variable)
 *  9️⃣ `*`       → Multiplication operator
 *  🔟 `p`       → Identifier (variable)
 *  1️⃣1️⃣ `)`    → Right parenthesis
 *  1️⃣2️⃣ `/`    → Division operator
 *  1️⃣3️⃣ `3`    → Constant
 *
 * ✅ **Total Tokens: 13**
 */
