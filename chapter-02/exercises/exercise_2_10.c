/*
 * Chapter 2, Exercise 10 – Essential Spaces in C Code
 * -----------------------------------------------------
 * This exercise examines which spaces in a C program are essential 
 * for correct compilation and execution versus those used only for readability.
 *
 * Key Findings:
 *
 * 1️⃣ **Essential Spaces (Required for Compilation)**
 *    - **Between keywords and identifiers**:
 *      - ✅ `int main(void)` → Space between `int` and `main` is necessary.
 *      - ✅ `int height, length, width;` → Space after `int` is required.
 *    - **Between arguments in function calls**:
 *      - ✅ `printf("Dimensions: %dx%dx%d\n", length, width, height);`
 *      - Without spaces, arguments wouldn't be correctly separated.
 *
 * 2️⃣ **Non-Essential (But Recommended for Readability)**
 *    - **Around operators**:
 *      - ✅ `height = 8;` (Readable)
 *      - ❌ `height=8;` (Works but harder to read)
 *    - **Within expressions**:
 *      - ✅ `weight = (volume + 165) / 166;`
 *      - ❌ `weight=(volume+165)/166;` (Valid but less readable)
 *
 * 3️⃣ **Spaces That Don’t Affect Compilation**
 *    - **Inside `#include` directives**:
 *      - ✅ `#include <stdio.h>` (Standard)
 *      - ✅ `#include  <stdio.h>` (Extra space but still works)
 *    - **Indentation and formatting**:
 *      - Improves readability but does not affect program execution.
 *
 * ✅ **Conclusion:**  
 * - Essential spaces exist **between keywords and identifiers** and **in function calls**.
 * - Spaces around operators and proper indentation **improve readability** but are not required.
 */
