#include <stdio.h>

/*
 * Project: Business Revenue Analysis
 * Concept: Storing multiple data points in a single Array.
 * Business Logic: Calculating average performance across multiple quarters.
 */
int main() {
    float revenue[4]; // Array to store 4 quarterly revenue data points
    float sum = 0, average;

    for(int i = 0; i < 4; i++) {
        printf("Enter Revenue for Quarter %d: ", i + 1);
        scanf("%f", &revenue[i]);
        sum += revenue[i]; // Accumulate total revenue
    }

    average = sum / 4;
    printf("\n--- Financial Summary ---\n");
    printf("Total Annual Revenue: $%.2f\n", sum);
    printf("Quarterly Average: $%.2f\n", average);

    return 0;
}
