#include <stdio.h>

int main() {
    int rows, i, j, k;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the upper half of the pattern
    for (i = 0; i < rows; i++) {
        // Print spaces
        for (j = 0; j < i; j++) {
            printf("  ");
        }

        // Print asterisks
        for (k = 0; k < 2 * (rows - i) - 1; k++) {
            printf("* ");
        }

        printf("\n");
    }

    // Print the lower half of the pattern
    for (i = rows - 2; i >= 0; i--) {
        // Print spaces
        for (j = 0; j < i; j++) {
            printf("  ");
        }

        // Print asterisks
        for (k = 0; k < 2 * (rows - i) - 1; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

