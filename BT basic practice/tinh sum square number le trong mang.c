#include <stdio.h>
#include <math.h>
int sum_square_number(int a[], int n){
	int i, sum = 0;
	for(i = 0; i< n; i++){
		if(a[i]%2!=0){
			a[i] = a[i]*a[i];
		}
	}
	for(i = 0; i< n; i++){
		if(sqrt(a[i]) == (int)sqrt(a[i]) && (int)sqrt(a[i])%2!=0){
			sum += a[i];
		}
	}
	return sum;
}
int sum_square_number2(int a[], int n){
	int i, sum = 0;
	for(i = 0; i< n; i++){
		if(a[i]%2!=0){
			a[i] = a[i]*a[i];
			sum += a[i];
		}
	}
	return sum;
}
int main() {
	int a[5] = {1, 2, 2, 2, 3};
	printf("%d", sum_square_number2(a, 5));
}
