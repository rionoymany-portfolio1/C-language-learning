#include <stdio.h>

/*
 * financial_array.c
 * Concept: 1D arrays for multi-point data storage
 * Learning focus: Array indexing, accumulation loops, average calculation
 * Business context: Quarterly revenue analysis and performance benchmarking
 */

#define QUARTERS 4  // Named constant — easy to scale to 6 or 12 periods

int main() {
    float revenue[QUARTERS];
    float sum     = 0.0;
    float average = 0.0;

    // Collect revenue input for each quarter
    for (int i = 0; i < QUARTERS; i++) {
        printf("Enter Revenue for Q%d: $", i + 1);
        scanf("%f", &revenue[i]);
        sum += revenue[i];
    }

    average = sum / QUARTERS;

    printf("\n=== Annual Financial Summary ===\n\n");
    printf("Total Revenue    : $%.2f\n", sum);
    printf("Quarterly Average: $%.2f\n", average);

    return 0;
}
