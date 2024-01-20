#include <stdio.h>
int main() {
	int n = 20, i, j;
	for(i = 1; i<=5;i++){
		for(j = 1; j<=9; j++){
			if(j <= (2*5)-(2*i)){
				printf(" ");
			}else
				printf("*");
		}
		printf("\n");
	}
}
