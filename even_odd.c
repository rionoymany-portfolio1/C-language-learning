#include <stdio.h>

int main() {
    int id_number; // Declare integer for ID or Serial number
    
    printf("Enter Asset/Customer ID: ");
    scanf("%d", &id_number); // Input integer data
    
    // Using Modulo operator (%) to check for parity
    if (id_number % 2 == 0) {
        printf("Classification: Type A (Even Cluster)\n"); // Logic for even numbers
    } else {
        printf("Classification: Type B (Odd Cluster)\n"); // Logic for odd numbers
    }
    
    return 0;
}
