#include<stdio.h>

int main() {
	int a = 0, tong = 0;
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		if(i%2 != 0){
			tong += i;
			}
	}	
	printf("Tong so le la: %d", tong);
}
