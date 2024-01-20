#include <stdio.h>
int main() {
	int n, i;
	do{
		printf("Nhap n >= 0\n");
		scanf("%d", &n);
	}while(n < 0);
	long long f0 = 0, f1 = 1, fn;
	printf("0 1 ");
	for(i = 2; i < n; i++){
		fn = f0 + f1;
		printf("%d ", fn);
		f0 = f1;
		f1 = fn;
	}
}
