/*
 * Chapter 3, Exercise 3 – Comparing scanf Format Strings
 * -------------------------------------------------------
 * This exercise compares different scanf format strings to determine
 * whether they are functionally equivalent. If not, the differences
 * in behavior are explained.
 *
 * Key Concepts:
 *  - Whitespace handling in scanf.
 *  - The effect of explicit separators like `-` and `,` in format strings.
 *  - How different scanf patterns interpret user input.
 *
 * Analysis:
 * ----------
 * (a) "%d" versus " %d"
 *     ✅ Equivalent
 *     - Leading whitespace is ignored by scanf when reading integers.
 *     - Both correctly read an integer, skipping spaces, tabs, or newlines.
 *
 * (b) "%d-%d-%d" versus "%d -%d -%d"
 *     ❌ Not equivalent
 *     - `"%d-%d-%d"` requires input in **exact format** with `-` separators (e.g., `"10-20-30"`).
 *     - `"%d -%d -%d"` allows **optional spaces** before and after `-` (e.g., `"10 - 20 - 30"`).
 *
 * (c) "%f" versus " %f"
 *     ✅ Equivalent
 *     - Similar to (a), leading whitespace before `%f` is ignored.
 *     - Both correctly read a floating-point number, skipping spaces if necessary.
 *
 * (d) "%f %f" versus " %f" versus "%f , %f"
 *     ❌ Not equivalent
 *     - `"%f %f"` → Reads two floats separated by any whitespace (e.g., `"3.14 2.71"` or `"3.14\n2.71"`).
 *     - `" %f"` → Reads **one** float, skipping initial whitespace but stopping after the first number.
 *     - `"%f , %f"` → Requires a **comma separator** (e.g., `"3.14,2.71"` or `"3.14 , 2.71"`).
 *
 * Summary:
 * ----------
 * ✅ (a) Equivalent
 * ❌ (b) Not equivalent: `"%d-%d-%d"` needs strict `-` separators; `"%d -%d -%d"` allows spaces.
 * ✅ (c) Equivalent
 * ❌ (d) Not equivalent: Different input expectations for whitespace and separators.
 */

