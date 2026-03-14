#include <stdio.h>

int main() {
    int target_pin = 8899;
    int input_attempt;
    int max_retries = 3;

    printf("Initiating Credential Test Simulation...\n");

    // 'for' loop: Controls the number of attempts (Standard Brute-force Logic)
    for(int i = 1; i <= max_retries; i++) {
        printf("Attempt %d of %d | Enter PIN: ", i, max_retries);
        scanf("%d", &input_attempt);

        if(input_attempt == target_pin) {
            printf("[SUCCESS] Access Granted. System Vulnerability Confirmed.\n");
            break; // Stop loop if successful
        } else {
            printf("[FAILED] Incorrect Credentials.\n");
            if(i == max_retries) {
                printf("[ALERT] Account Locked. Payload Execution Halted.\n");
            }
        }
    }
    return 0;
}
