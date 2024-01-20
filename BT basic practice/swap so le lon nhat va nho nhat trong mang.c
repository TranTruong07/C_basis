#include <stdio.h>
int findmax(int a[], int n){
	int i;
	int j;
	int max = a[0];
	for(j = 0; j<n; j++){
		if(a[j] > max&&a[j] % 2==0){
				max = a[j];
				i = j;
			}
	}
	return i;
}
int findmin(int a[], int n){
	int i;
	int j;
	int min = a[0];
	for(j = 0; j<n; j++){
		if(a[j] < min&&a[j] % 2==0){
				min = a[j];
				i = j;
			}
	}
	return i;
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a[5] = {2, 5, 0, 8, 9};
	printf("%d\n", findmax(a, 5));
	printf("%d\n", findmin(a, 5));
	swap(&a[findmax(a, 5)], &a[findmin(a, 5)]);
	int j;
	for(j = 0; j<5; j++){
		printf("%d ", a[j]);
	}
}
