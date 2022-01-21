/*
Menu driven program using do-while loop
*/

#include <stdio.h>

int main() {
    // Making continue response global to the menu
    char ans;

    do {
        // printing pattern
        int n;

        printf("Enter the number of rows: ");
        scanf("%d", &n);

        for (int r = 1; r <= n; r++) {
            for (int c = 1; c <= r; c++) {
                printf("%3d", r);
            }
            printf("\n");
        }

        // prompting user to enter a choice to continue
        printf("\nDo you want to continue? (Y/N): ");
        fflush(stdin);
        scanf("%c", &ans);
    } while (ans == 'Y' || ans == 'y'); // exit condition for do-while (with ; :))

    printf("\nOutside loop!");

    return 0;
}