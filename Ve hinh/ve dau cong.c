#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the odd number only");
    scanf("%d", &n);
    int i, j;
    for (i = 1; i <= n; i++)
    {
        if (i == ((n / 2) + 1))
        {
            for (j = 1; j <= n; j++)
            {
                printf(" + ");
            }
        }
        else
        {
            for (j = 1; j <= n / 2; j++)
            {
                printf("   ");
            }
            printf(" + ");
        }
        printf("\n");
    }
    return 0;
}
/*

Enter the odd number only 5
       +
       +
 +  +  +  +  +
       +
       +

*/
