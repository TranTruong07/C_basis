#include <stdio.h>
#include <math.h>

void tamGiacThuong(int h)
{
	int i, j;
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j < 2 * h; j++)
        {
            if (abs(h - j) <= (i - 1))
            {
                printf("%3d", i - abs(h - j));
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int h;
    scanf("%d", &h);
    tamGiacThuong(h);
    return 0;
}
/*

              1
           1  2  1
        1  2  3  2  1
     1  2  3  4  3  2  1
  1  2  3  4  5  4  3  2  1


*/
