#include <stdio.h>
void reverse(int a[], int n){
	int i, b[6];
	int j = 0;
	for(i = n-1; i>=n-6; i--){
		b[j] = a[i];
		j++;
	}
	j = 0;
	for(i = 2 ; i< n; i++){
		a[i] = b[j];
		j++;
	}
	for(i = 0; i< n; i++){
		printf("%d ", a[i]);
	}
}
int main() {
	int a[8] = {0, 1, 2, 3, 4, 8, 7, 5};
	reverse(a, 8);
}
