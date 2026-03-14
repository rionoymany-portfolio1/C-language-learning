#include <stdio.h>

int main() {
    char cont;
    float salary;

    // 'do-while' ensures the process runs at least once
    do {
        printf("\nEnter Employee Monthly Salary: ");
        scanf("%f", &salary);

        // Nested logic for multi-tier taxation
        if(salary > 50000) {
            printf("Tax (10%%): %.2f | Net: %.2f\n", salary * 0.10, salary * 0.90);
        } else {
            printf("Tax: Exempt | Net: %.2f\n", salary);
        }

        printf("Process next record? (y/n): ");
        scanf(" %c", &cont); // Space before %c to clear buffer

    } while(cont == 'y' || cont == 'Y');

    printf("Batch Processing Complete.\n");
    return 0;
}
