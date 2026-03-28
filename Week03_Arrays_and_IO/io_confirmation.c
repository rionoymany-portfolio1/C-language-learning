#include <stdio.h>

/*
 * io_confirmation.c
 * Concept: Low-level character I/O with getchar() and putchar()
 * Learning focus: Input stream handling, single-character capture,
 *                 conditional branching on user input
 */

int main() {
    char confirm;

    printf("Proceed with scheduled data export? (y/n): ");

    // getchar() reads one character directly from the input stream
    confirm = getchar();

    if (confirm == 'y' || confirm == 'Y') {
        printf("Status: [CONFIRMED] Input received -> ");
        putchar(confirm); // putchar() writes a single character to stdout
        printf("\nExport process initiated.\n");
    } else {
        printf("Status: [CANCELLED] Operation aborted by user.\n");
    }

    return 0;
}
