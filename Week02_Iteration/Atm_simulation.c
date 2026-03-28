#include <stdio.h>

/*
 * atm_simulation.c
 * Concept: Session loop with menu-driven state management
 * Learning focus: while loop, switch-case, boolean state control
 * Business context: Banking terminal flow and user session handling
 */

int main() {
    int choice;
    int session_active = 1; // 1 = active, 0 = terminated

    // while loop maintains session state until user exits
    while (session_active) {
        printf("\n=== Integrated Banking Terminal ===\n");
        printf("1. View Balance\n");
        printf("2. Fund Transfer\n");
        printf("3. Exit\n");
        printf("Select Operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance inquiry authorized.\n");
                printf("Current Balance: $10,500.00\n");
                break;
            case 2:
                printf("Transfer mode active. Enter destination account...\n");
                break;
            case 3:
                printf("Logging out. Session terminated.\n");
                session_active = 0;
                break;
            default:
                printf("Invalid input. Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}
