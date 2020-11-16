#include <stdio.h>

int main() {
    int i, j;
    char text[] = {
        'c',
        '\0'
    };

    for (i = 11; i > 0; i = i - 2) {
        for (j = 0; j < i; j++) {
            if (9 == i && 0 == j) {
                printf(" %s", text);
            } else if (7 == i && 0 == j) {
                printf("  %s", text);
            } else if (5 == i && 0 == j) {
                printf("   %s", text);
            } else if (3 == i && 0 == j) {
                printf("    %s", text);
            } else if (1 == i && 0 == j) {
                printf("     %s", text);
            } else {
                printf("%s", text);
            }

        }
        if (i > 1) {
            printf("\n");
        }
    }



    printf("\n");

    for (i = 3; i < 13; i = i + 2) {
        for (j = 0; j < i; j++) {
            if (3 == i && 0 == j) {
                printf("    %s", text);
            } else if (5 == i && 0 == j) {
                printf("   %s", text);
            } else if (7 == i && 0 == j) {
                printf("  %s", text);
            } else if (9 == i && 0 == j) {
                printf(" %s", text);
            } else if (11 == i && 0 == j) {
                printf("%s", text);
            } else {
                printf("%s", text);
            }
        }
        if (i < 11) {
            printf("\n");
        }
    }
    return 0;
}