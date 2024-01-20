#include <stdio.h>
void xoaphantu(int a[], int n, int j){
	int i;
	for(i = j; i< n; i++){
		a[i] = a[i+1];
	}
}
int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i = 0; i<n; i++){
		printf("a[%d] - ", i);
		scanf("%d", &arr[i]);
	}
	int j;
	for(i = 0; i<n; i++){
		for(j = i+1; j< n; j++){
			if(arr[i] == arr[j]){
				xoaphantu(arr, n, j);
				n--;
			}
		}
	}
	for(i = 0; i<n; i++){
		printf("%d ", arr[i]);
	}
}
