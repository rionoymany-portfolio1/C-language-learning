#include <stdio.h>

/*
 * Project: Strategic Target Matrix
 * Concept: 2D Array for multi-dimensional data mapping.
 * Red Team: Understanding how memory represents grids (Buffers/Stacks).
 */
int main() {
    // 2D Array representing a 3x3 grid of security nodes or asset values
    int matrix[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    printf("Displaying Asset Value Matrix (3x3):\n");
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            printf("[%d][%d]: %-4d ", row, col, matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
