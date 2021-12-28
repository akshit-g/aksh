#include <stdio.h>

// Start of main() function
int main() {
    // Making continue response global to the menu
    char ans;

    do {
        // Printing pattern
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
    } while (ans == 'Y' || ans == 'y'); // Exit condition for do-while (with ; :))

    printf("\nOutside loop!");

    return 0;
}