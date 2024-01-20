#include <stdio.h>
int main(){
	int i ,j,n =10; 
	for(i = 1; i<=n; i++){
		for(j = 1; j<= n-i; j++){
			printf(" ");
		}
		for(j = i; j>=1; j--){
			printf("%d", j);
		}
		for(j = 2; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
}
/*
               1
              212
             32123
            4321234
           543212345 
            ……………….
     109876543212345678910
*/
