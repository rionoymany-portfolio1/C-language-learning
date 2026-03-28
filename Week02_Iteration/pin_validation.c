#include <stdio.h>

/*
 * pin_validation.c
 * Concept: Bounded retry loop with success/failure branching
 * Learning focus: for loop, break statement, attempt counter logic
 * Business context: Modeling input validation and account lockout policy
 */

int main() {
    int correct_pin  = 8899;
    int input_pin;
    int max_attempts = 3;

    printf("=== PIN Verification System ===\n\n");

    // for loop controls number of allowed attempts before lockout
    for (int i = 1; i <= max_attempts; i++) {
        printf("Attempt %d of %d | Enter PIN: ", i, max_attempts);
        scanf("%d", &input_pin);

        if (input_pin == correct_pin) {
            printf("Status: [VERIFIED] Access granted.\n");
            break;
        } else {
            printf("Status: [INCORRECT] PIN does not match.\n");
            if (i == max_attempts) {
                printf("Status: [LOCKED] Maximum attempts reached. Account locked.\n");
            }
        }
    }

    return 0;
}
