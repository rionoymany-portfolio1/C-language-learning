#include <stdio.h>

/*
 * grade_check.c
 * Concept: Multi-tier conditional branching
 * Learning focus: if-else if-else chain, threshold-based classification
 * Business context: Risk tier assessment based on performance score
 */

int main() {
    int score;

    printf("Enter Evaluation Score (0-100): ");
    scanf("%d", &score);

    // Three-tier classification based on score threshold
    if (score >= 80) {
        printf("Risk Tier: LOW    | Prime Asset\n");
    } else if (score >= 50) {
        printf("Risk Tier: MEDIUM | Standard Asset\n");
    } else {
        printf("Risk Tier: HIGH   | Subprime Asset\n");
    }

    return 0;
}
