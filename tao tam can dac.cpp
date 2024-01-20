#include <stdio.h>
#include <math.h>
void tamgiaccandac(int x){
	printf("Nhap chieu cao h: ");
	scanf("%d", &x);
	for(int i = 1; i<=x;i++){
		for(int j = 1;j<=x*2;j++){
			if(abs(x-j)<=(i-1)){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
void tamgiaccanrong(int x){
	printf("Nhap chieu cao h: ");
	scanf("%d", &x);
	for(int i = 1; i<=x;i++){
		for(int j = 1; j<=x-i;j++){
			printf(" ");
		}
		for(int k = 1; k<=i*2-1;k++){
			printf("*");
		}
		for(int j = 1; j<=x-i;j++){
			printf(" ");
		}
		printf("\n");
	}

}
void tamgiacvuong(int x){
	printf("Nhap chieu cao h: ");
	scanf("%d", &x);
	for (int i = x; i>=1; i--){
		for(int j = 1;j<= i;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	int h;
	tamgiaccandac(h);
	//tamgiaccanrong(h);
	//tamgiacvuong(h);
	
}
