/*
		* * * * *
		* 	    *
		* * * * *
*/
#include <stdio.h>
int main() {
	int a = 3, b = 5, i, j;
	for(i = 1; i<=a; i++){
		for(j = 1; j<=b; j++){
			if(i == 1|| i == a|| j == 1|| j==b)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
