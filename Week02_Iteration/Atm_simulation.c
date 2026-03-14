#include <stdio.h>

int main() {
    int choice;
    int session_active = 1; // 1 = active, 0 = terminated

    // 'while' loop maintains the program state (Session Management)
    while(session_active) {
        printf("\n--- Integrated Banking Terminal ---\n");
        printf("1. View Balance\n2. Fund Transfer\n3. Exit System\n");
        printf("Select Operation: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                printf("Checking Balance... [Authorized]\n");
                printf("Current Balance: $10,500.00\n");
                break;
            case 2:
                printf("Transfer Mode Active. Enter Destination Account...\n");
                break;
            case 3:
                printf("Logging out... Secure Session Terminated.\n");
                session_active = 0; // Break the loop to exit
                break;
            default:
                printf("Invalid Input. Security Alert: Unauthorized Operation.\n");
        }
    }
    return 0;
}
