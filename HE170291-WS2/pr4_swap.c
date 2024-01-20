#include <stdio.h>
int main() {
	int a, b, c;	
	do{
		printf("Nhap a: ");
		scanf("%d", &a);
		printf("Nhap b: ");
		scanf("%d", &b);
		printf("swap! \n");
		c = a;
		a = b;
		b = c;
		printf("a = %d \n",a);
		printf("b = %d \n",b);
	}while(a != 0 && b != 0);	
}
