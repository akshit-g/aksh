#include <stdio.h>

// Start of main() function
int main() {
    // Making continue response global to the menu
    char ans;

    for (;;) {
        // Pattern printing
        int n;

        printf("Enter the number of rows: ");
        scanf("%d", &n);

        for (int r = 1; r <= n; r++) {
            for (int c = 1; c <= r; c++) {
                printf("%3d", r);
            }
            printf("\n");
        }

        // Prompting user to enter a choice to continue
        printf("\nDo you want to continue? (Y/N): ");
        fflush(stdin);
        scanf("%c", &ans);

        // Exit condition for infinite loop

        // If user does not want to continue, exit the loop 
        if (ans == 'N' || ans == 'n') {
            break;
        }
    }

    return 0;
}