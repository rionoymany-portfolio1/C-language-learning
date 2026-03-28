#include <stdio.h>

/*
 * even_odd.c
 * Concept: Modulo operator for parity checking
 * Learning focus: if-else branching, integer input, remainder logic
 * Business context: Asset classification by ID parity
 */

int main() {
    int id_number;

    printf("Enter Asset/Customer ID: ");
    scanf("%d", &id_number);

    // Modulo operator returns remainder — 0 means evenly divisible by 2
    if (id_number % 2 == 0) {
        printf("Classification: Type A (Even Cluster)\n");
    } else {
        printf("Classification: Type B (Odd Cluster)\n");
    }

    return 0;
}
