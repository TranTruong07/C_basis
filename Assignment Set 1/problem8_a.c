#include <stdio.h>
int main() {
	int n = 5;
	//printf("Enter n: ");
//	scanf("%d", &n);
	int i, j;
	for(i = 1; i<=n; i++){
		for(j = 1; j<=n; j++){
			printf("[%d x %d]", i, j);
			
		}
		printf("\n");
	}
}
