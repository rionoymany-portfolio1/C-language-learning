#include <stdio.h>

/*
 * calculator.c
 * Concept: Basic arithmetic with float precision
 * Learning focus: Variable declaration, scanf input handling, formatted output
 * Business context: Net profit and margin calculation for financial reporting
 */

int main() {
    float revenue, cost, profit;

    printf("Enter Total Revenue: $");
    scanf("%f", &revenue);

    printf("Enter Operational Cost: $");
    scanf("%f", &cost);

    profit = revenue - cost;

    printf("\n=== Financial Summary ===\n\n");
    printf("Net Profit : $%.2f\n", profit);
    printf("Margin     : %.2f%%\n", (profit / revenue) * 100);

    return 0;
}
