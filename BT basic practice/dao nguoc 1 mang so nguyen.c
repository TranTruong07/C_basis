#include <stdio.h>

int main() {
	int a[5] = {1, 2, 5, 8, 9};
	int i, j;
	for(i = 0 ; i<= 5/2; i++){
		int temp = a[i];
		a[i] = a[5-i-1];
		a[5-i-1] = temp;
	}
	for(i = 0; i< 5; i++){
		printf("%d ", a[i]);
	}
}
