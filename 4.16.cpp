#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int i, j, rows = 10;
    char x;

    printf("Enter the type of piramids (A-D) : ");
    scanf("%c", &x);

    switch (x) {
    case 'A':
        for (i = 1; i <= rows; ++i) {
            for (j = 1; j <= i; ++j) {
                printf("* ");
            }
            printf("\n");
        }

        break;

    case 'B':
        for (i = rows; i >= 1; --i) {
            for (j = 1; j <= i; ++j) {
                printf("* ");
            }
            printf("\n");
        }

        break;

    case 'C':
        for (i = 0; i < rows; i++) {

            for (int j = 0; j < 2 * i; j++) {
                printf(" ");
            }

            for (int k = 0; k < rows - i; k++) {
                printf("* ");
            }
            printf("\n");
        }

        break;

    case 'D':
        for (i = 0; i < rows; i++) {

            for (int j = 0; j < 2 * (rows - i) - 1; j++) {
                printf(" ");
            }

            for (int k = 0; k <= i; k++) {
                printf("* ");
            }
            printf("\n");
        }
        break;
    default:
        printf("Incorrect type of pyramids.\n");
        break;
    }

    return 0;
}
