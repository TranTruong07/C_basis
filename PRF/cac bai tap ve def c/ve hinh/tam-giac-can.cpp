#include <stdio.h>
int intamgiaccan(int n){
	int i,j;
for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
    }
 
 int intamgiaccan1(int n){
	int i,j;
for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j <2 * (n-i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
    }
 
int main() {
    int i, j, n;
    scanf("%d", &n);
    intamgiaccan(n);
    printf("\n");
    intamgiaccan1(n);
}
