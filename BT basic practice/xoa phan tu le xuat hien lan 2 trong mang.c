#include <stdio.h>
int main() {
	int a[5], n = 5;
	int i, j, k;
	for(i = 0; i< 5; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i< n-1; i++){
		for(j = i+1; j<n; j++){
			if(a[i] == a[j] && a[j] % 2 != 0){
				for(k = j; k<n; k++){
					a[k] = a[k+1];
				}
				n--;
			}
		}
	}
	printf("\nOUTPUT:\n");
	for(i = 0; i< n; i++){
		printf("%d\n", a[i]);
	}
}
