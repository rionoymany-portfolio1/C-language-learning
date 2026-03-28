#include <stdio.h>

/*
 * tax_module.c
 * Concept: Modular business logic with return values
 * Learning focus: Functions, float arithmetic, real-world financial modeling
 */

// Calculates tax based on a flat-rate threshold model
// Returns: tax amount owed, or 0.0 if income is below threshold
float calculateTax(float income) {
    if (income > 50000) {
        return income * 0.10; // 10% flat rate above threshold
    } else {
        return 0.0;           // Below threshold: tax exempt
    }
}

int main() {
    float grossIncome = 65000.0;
    float taxAmount   = calculateTax(grossIncome);
    float netIncome   = grossIncome - taxAmount;

    printf("=== Payroll Tax Module ===\n\n");
    printf("Gross Income : $%.2f\n", grossIncome);
    printf("Tax (10%%)    : $%.2f\n", taxAmount);
    printf("Net Income   : $%.2f\n", netIncome);

    return 0;
}
