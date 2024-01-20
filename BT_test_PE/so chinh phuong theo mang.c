#include <stdio.h>
void input(int x[], int n){
	int i;
	printf("Enter array: ");
	for(i = 0; i< n; i++){
		scanf("%d", &x[i]);
	}		
}
void output(int x[], int n){
	int i;
	printf("OUTPUT: \n");
	for(i = 0; i< n; i++){
		printf("%d\n", x[i]);
	}		
}
void change(int x[], int n){
	int i;
	for(i = 0; i<n; i++){
		x[i] = pow(x[i], 2);
	}
}
int main() {
	int a[100], n = 4;
	input(a, n);
//	output(a, n);
	change(a, n);
	output(a, n);
}
