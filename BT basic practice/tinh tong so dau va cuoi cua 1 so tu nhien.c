#include <stdio.h>

int Sum(int a){
	int sum = 0, c;
	int b[20];
	int i = 0, count=0;
	
	do{
		c = a % 10;
		a = a / 10;
		b[i] = c;
		i++;
		count++;
	}while(a>0);
	int j;
	if(count == 1){
		sum = b[0];
	}else
		sum = b[0] + b[i-1];	
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


