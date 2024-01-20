#include <stdio.h>

int main() {
    int n, i, j;

    printf("Nhap vao chieu cao cua tam giac: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            if (i == n || j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

