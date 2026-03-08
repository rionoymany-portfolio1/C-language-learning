#include <stdio.h>

int main() {
    int stock_a, stock_b;
    printf("Enter Price of Stock A: ");
    scanf("%d", &stock_a); // Get first data point
    
    printf("Enter Price of Stock B: ");
    scanf("%d", &stock_b); // Get second data point
    
    // Comparison logic to identify the dominant value
    if (stock_a > stock_b) {
        printf("Strategic Pick: Stock A ($%d)\n", stock_a); // Case A is greater
    } else if (stock_b > stock_a) {
        printf("Strategic Pick: Stock B ($%d)\n", stock_b); // Case B is greater
    } else {
        printf("Market Neutral: Both stocks hold equal value.\n"); // Values are equal
    }
    
    return 0;
}
