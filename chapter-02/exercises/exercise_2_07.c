/*
 * Chapter 2, Exercise 7 – Identifying Keywords in C
 * --------------------------------------------------
 * This discussion examines which identifiers in C are reserved keywords 
 * and which are standard functions or user-defined names.
 *
 * Key Concepts:
 *  - A **keyword** is a reserved word with a special meaning in C.
 *  - Keywords **cannot be used as variable names** or identifiers.
 *  - C keywords are predefined by the language standard and must be written in lowercase.
 *
 * Identifier Analysis:
 *  ✅ `for`    → **Keyword** (Used for loops in C).
 *  ❌ `lf`     → **Not a keyword** (Often mistaken for `%lf`, a format specifier).
 *  ❌ `main`   → **Not a keyword** (A special function name but not reserved).
 *  ❌ `printf` → **Not a keyword** (A standard library function).
 *  ✅ `while`  → **Keyword** (Used for loops in C).
 *
 * ✅ **Conclusion:**  
 * Keywords: `for`, `while`  
 * Not keywords: `lf`, `main`, `printf`
 */

