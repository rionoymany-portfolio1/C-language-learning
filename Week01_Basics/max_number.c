#include <stdio.h>

/*
 * max_number.c
 * Concept: Comparison logic to identify maximum value
 * Learning focus: if-else if-else chain, integer comparison, edge case handling
 * Business context: Stock price comparison for investment decision support
 */

int main() {
    int stock_a, stock_b;

    printf("Enter Price of Stock A: $");
    scanf("%d", &stock_a);

    printf("Enter Price of Stock B: $");
    scanf("%d", &stock_b);

    // Three-case comparison: A > B, B > A, or equal
    if (stock_a > stock_b) {
        printf("Higher Value: Stock A ($%d)\n", stock_a);
    } else if (stock_b > stock_a) {
        printf("Higher Value: Stock B ($%d)\n", stock_b);
    } else {
        printf("Equal Value: Both stocks priced at $%d\n", stock_a);
    }

    return 0;
}
