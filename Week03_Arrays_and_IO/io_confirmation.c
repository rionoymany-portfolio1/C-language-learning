#include <stdio.h>

/*
 * Project: Secure Session Confirmation
 * Concept: Low-level character handling for session control.
 * Red Team: Fundamental for understanding buffer input streams.
 */
int main() {
    char confirm;
    printf("Do you want to execute the strategic payload? (y/n): ");
    
    // getchar() captures a single character from the input stream
    confirm = getchar(); 
    
    if (confirm == 'y' || confirm == 'Y') {
        printf("Action: [AUTHORIZED] ");
        putchar(confirm); // putchar() displays the character
        printf("\nInitializing execution sequence...\n");
    } else {
        printf("Action: [ABORTED] Session terminated.\n");
    }
    
    return 0;
}
