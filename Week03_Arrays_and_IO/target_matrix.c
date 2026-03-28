#include <stdio.h>

/*
 * data_matrix.c
 * Concept: 2D arrays for multi-dimensional data storage
 * Learning focus: Nested loops, row/column indexing,
 *                 how memory represents contiguous grid structures
 */

int main() {
    // 2D array representing a 3x3 grid of asset values
    int matrix[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    printf("=== Asset Value Matrix (3x3) ===\n\n");

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("[%d][%d]: %-4d ", row, col, matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
