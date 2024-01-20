#include <stdio.h>
int main() {
	int a, i, j, k;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Xuat ra hinh chu nhat\n");
	for(i = 0; i<a; i++){
		for(j = 0; j< a; j++){
			if(i==0||i==a-1||j==0||j==a-1){
			printf(" = ");			
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
}

