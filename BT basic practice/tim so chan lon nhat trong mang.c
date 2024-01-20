#include <stdio.h>
int KT_sochan(int a[], int n){
	int i = 0, max;
	while(a[i]%2!=0){
		i++;
	}
	int j;
	max = a[i];
	for(j = 0; j<n; j++){
		if(a[j] % 2 == 0){
			if(a[j] > max)
				max = a[j];
		}
	}
	return max;
}
int main() {
	int a[5];
	int i;
	for(i = 0; i< 5; i++){
		scanf("%d", &a[i]);
	}
	printf("\nOUTPUT:\n");
	printf("%d", KT_sochan(a, 5));
}
