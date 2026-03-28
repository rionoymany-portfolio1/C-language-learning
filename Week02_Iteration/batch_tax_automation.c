#include <stdio.h>

/*
 * batch_tax_automation.c
 * Concept: do-while loop for repeated batch processing
 * Learning focus: do-while vs while, nested conditionals, input buffer handling
 * Business context: Automated multi-record payroll tax calculation
 */

int main() {
    char cont;
    float salary;

    // do-while ensures at least one record is processed before checking condition
    do {
        printf("\nEnter Employee Monthly Salary: $");
        scanf("%f", &salary);

        // Multi-tier tax logic based on salary threshold
        if (salary > 50000) {
            printf("Tax (10%%): $%.2f | Net: $%.2f\n", salary * 0.10, salary * 0.90);
        } else {
            printf("Tax: Exempt | Net: $%.2f\n", salary);
        }

        printf("Process next record? (y/n): ");
        scanf(" %c", &cont); // Space before %c clears newline from input buffer

    } while (cont == 'y' || cont == 'Y');

    printf("\nBatch Processing Complete.\n");

    return 0;
}
