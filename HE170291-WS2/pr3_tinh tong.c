#include <stdio.h>
int main() {
	int n;	
	int s = 0;	
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		s = s + n;		
	}while(n != 0);
	printf("Tong cua cac so la: \n");
	printf("%d", s);
}	

