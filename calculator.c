#include <stdio.h>

int main() {
    float revenue, cost, profit; // Declare decimal variables for financial precision
    
    printf("Enter Total Revenue: "); // Request sales data
    scanf("%f", &revenue); // Input revenue from user
    
    printf("Enter Operational Cost: "); // Request expense data
    scanf("%f", &cost); // Input cost from user
    
    profit = revenue - cost; // Calculate net profit
    
    // Display results with 2 decimal points for professional reporting
    printf("Net Profit: $%.2f\n", profit);
    printf("Margin: %.2f%%\n", (profit / revenue) * 100); 
    
    return 0;
}
