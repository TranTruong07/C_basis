#include <stdio.h>
double Change(int x, int y){
	double z = y, g = x;
	//printf("%lf", z);
	while(z>=1){
		z = z / 10;
	}	
	if(x>0){
		g = x + z;		
	}else{
		g = x - z;
	}
	return g;
}

int main() {
	int a, b;
	printf("Nhap phan nguyen cua so thuc: ");
	scanf("%d", &a);
	do{
		printf("Nhap phan phan cua so thuc (b>0): ");
		scanf("%d", &b);
	}while(b<0);	
	double value = Change(a, b);
	printf("So thuc can tim la: %lf", value);
}
