//WAP to enter number as diagonally at both side Angle
#include<stdio.h>

int main() {
    int a[3][3] = {0}, c, d;

    printf("Enter Elements in Matrix A (Main and Side Diagonals)\n");
    for(c = 0; c < 3; c++) {
        for(d = 0; d < 3; d++) {
            if (c == d || c == 2 - d) {
                scanf("%d", &a[c][d]);
            }
        }
    }

    printf("Elements in Matrix A \n");
    for(c = 0; c < 3; c++) {
        for(d = 0; d < 3; d++) {
            printf("%d\t", a[c][d]);
        }
        printf("\n");
    }

    return 0;
}

