#include <stdio.h>

/*
 * multiplication_matrix.c
 * Concept: Nested loops for 2D data generation
 * Learning focus: Outer/inner loop relationship, printf formatting, alignment
 * Business context: Generating structured data tables for reporting
 */

int main() {
    printf("=== Multiplication Data Matrix (1–5 x 1–12) ===\n\n");

    // Outer loop: rows (each representing a data set)
    for (int row = 1; row <= 5; row++) {
        printf("Set %d: ", row);

        // Inner loop: columns (data points within each set)
        for (int col = 1; col <= 12; col++) {
            printf("%4d", row * col);
        }
        printf("\n");
    }

    return 0;
}
