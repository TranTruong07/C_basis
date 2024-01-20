#include <stdio.h>

int main() {
    int n, i, j;

    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || j == n-i-1|| j==0) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

