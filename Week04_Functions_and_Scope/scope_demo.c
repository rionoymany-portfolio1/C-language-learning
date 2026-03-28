#include <stdio.h>

/*
 * scope_demo.c
 * Concept: Variable scope — global vs local
 * Learning focus: How scope affects data visibility and state management
 */

// Global scope: shared state accessible across all functions
// Real-world use: system-wide configuration or session tracking
int accessLevel = 0;

// Demonstrates local scope and global state mutation
void updateAccessLevel() {
    int sessionToken = 9988; // Local: exists only within this function
    accessLevel = 1;         // Modifying global state from within a function

    printf("[SYSTEM] Access level updated. Session token: %d\n", sessionToken);
}

int main() {
    printf("Access level (before): %d\n", accessLevel);

    updateAccessLevel();

    printf("Access level (after) : %d\n", accessLevel);

    // sessionToken is not accessible here — local scope ends with its function
    // printf("%d", sessionToken); // Uncommenting this causes a compile error

    return 0;
}
