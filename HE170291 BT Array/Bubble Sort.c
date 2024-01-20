#include <stdio.h>
void BubbleSort(int *a, int n){
	int i, j, t;
	for(i = 0; i< n-1; i++){
		for(j = n-1; j> 0; j--){
			if(a[j] < a[j-1]){
				t = a[j];
				a[j] = a[j-1];
				a[j-1] = t;
			}
		}
	}
}
void output(int a[], int n){
	int i;
	for(i = 0 ; i< n; i++){
		printf("%d  ", a[i]);
	}
}
int main() {
	int a[10] = {3, 4, 8, 9, 0, 7, 6, 1, 5, 2};
	BubbleSort(&a, 10);
	printf("\n");
	output(a, 10);
}
