#include <stdio.h>

int main() {
    int score;
    printf("Enter Evaluation Score (0-100): ");
    scanf("%d", &score); // Capture risk or performance score
    
    // Multi-tier decision making logic
    if (score >= 80) {
        printf("Risk Tier: LOW (Prime Asset)\n"); // High score = Low risk
    } else if (score >= 50) {
        printf("Risk Tier: MEDIUM (Standard Asset)\n"); // Medium tier
    } else {
        printf("Risk Tier: HIGH (Subprime / Vulnerable)\n"); // Low score = High risk
    }
    
    return 0;
}
