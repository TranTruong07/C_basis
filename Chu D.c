#include <stdio.h>
int main() {
	int a = 5, i, j, k;		
	for(i = 0; i<a; i++){
		for(j = 0; j< a; j++){
			if(j==0)
			printf(" * ");
			if(i == 0 && j == 0)
				printf(" * ");			
			if(i == a-1 && j == 0)
				printf(" * ");
			if(i == 1 && j == 3)
				printf(" * ");
			if(i == 2 && j == 3)
				printf(" * ");
			if(i == 3 && j == 3)
				printf(" * ");
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
