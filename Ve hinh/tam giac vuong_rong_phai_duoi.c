#include <stdio.h>

int main() {
    int n, i, j;

    printf("Nhap vao chieu cao cua tam giac: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

