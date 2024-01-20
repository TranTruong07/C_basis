#include <stdio.h>

int Sum(int a){
	int sum = 0, c;
	do{
		c = a % 10;
		a = a / 10;
		sum = sum + c;
	}while(a>0);	
	return sum;
}
int main() {
	int n, i;
	do{
		printf("Nhap n > 1\n");
		scanf("%d", &n);
	}while(n < 1);

	printf("sum = %d", Sum(n));	
}


