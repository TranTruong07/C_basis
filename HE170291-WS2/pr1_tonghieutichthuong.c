#include<stdio.h>
int main() {
	float a, b, sum, difference, product, quotien;
	int n;
	printf("Nhap gia tri a, b: ");
	scanf_s("%f%f", &a, &b);
	printf("Nhap phep tinh: \n");
	printf("1. Tong \n");
	printf("2. Hieu \n");
	printf("3. Tich \n");
	printf("4. Thuong \n");
	do{
		scanf_s("%d", &n);
	} while (n<1 && n >4);
	switch (n){
	case 1: 
		printf("a + b = %.2f", a + b);
		break;
	case 2:
		printf("a - b = %.2f", a - b);
		break;
	case 3:
		printf("a * b = %.2f", a * b);
		break;
	case 4:
		printf("a / b = %.2f", a / b);
		break;
	default:
		break;
	}
}

