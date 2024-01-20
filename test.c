#include <stdio.h>


int main() {
	int i = 0, j= 1;
	printf("output");
	int sum = 0; 
	for (i = 0; i<= 10; i++){
		for(j = 1; j<= 20; j++){
			sum = sum + (i*j);
		}
	}
	printf("%d", sum);	
}
