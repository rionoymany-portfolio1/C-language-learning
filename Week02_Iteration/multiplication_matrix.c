#include <stdio.h>

int main() {
    printf("Generating Data Value Matrix (1-5 range)...\n\n");

    // Outer Loop: Rows (Representing different data sets)
    for(int row = 1; row <= 5; row++) {
        printf("Set %d: ", row);
        
        // Inner Loop: Columns (Representing data points in each set)
        for(int col = 1; col <= 12; col++) {
            printf("%4d", row * col); // Formatting for clean alignment
        }
        printf("\n"); // Move to next row
    }
    return 0;
}
