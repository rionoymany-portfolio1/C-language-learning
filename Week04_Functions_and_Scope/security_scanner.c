#include <stdio.h>

/*
 * Port Status Analyzer
 * Concept: Modular function design for network diagnostics
 * Learning focus: Functions, parameters, conditional branching
 */

// Checks and reports the status of a given port
// Demonstrates: single-responsibility function design
void checkPortStatus(int port) {
    printf("[ANALYZER] Checking Port: %d...\n", port);

    if (port == 80 || port == 443) {
        printf("Status: Port %d is OPEN (HTTP/HTTPS Web Service)\n", port);
    } else {
        printf("Status: Port %d is FILTERED (No known service)\n", port);
    }
}

int main() {
    printf("--- Network Port Status Analyzer ---\n\n");

    // Testing analyzer against common network ports
    checkPortStatus(80);
    checkPortStatus(21);
    checkPortStatus(443);

    return 0;
}
