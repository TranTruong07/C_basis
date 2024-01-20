#include <stdio.h>
int main(){
	int n;
  	scanf("%d", &n);
  	int i,j;
  	for(i = 0; i < 2*n - 1;i++) {
   		for(j = 0; j < n;j++) {
      		if(i >= n -1 - j && i <= n -1 +j){
        		printf("*");
    		}else{
				printf(" ");
			}
    	}
    	printf("\n");
  }

}
/*
*****
 ****
  ***
   **
    *  
*/
