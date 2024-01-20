#include <stdio.h>

int Tich(int a){
	int tich = 1, c;
	do{
		c = a % 10;
		a = a / 10;
		tich *= c;
	}while(a>0);	
	return tich;
}
int main() {
	int n, i;
	do{
		printf("Nhap n > 1\n");
		scanf("%d", &n);
	}while(n < 1);

	printf("Tich = %d", Tich(n));	
}
