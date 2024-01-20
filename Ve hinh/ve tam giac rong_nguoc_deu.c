#include <stdio.h>

int main()
{
    int n;
    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &n);
    int i, j, k;
    for( i = n; i >= 1; i--)
    {
        for( j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for( k = 1; k <= i * 2 - 1; k++)
        {
            if(k == 1 || k == i * 2 - 1 || i == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

