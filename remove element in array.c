#include <stdio.h>
void input(int *a, int n){
	int i;
	for(i = 0; i<n;i++){
		scanf("%d", &a[i]);
	}
}	

void output(int *a, int n){
	int i;
	for(i = 0; i<n;i++){
		printf("%d", a[i]);
	}
}
void Remove(int *a, int *n){
	int i, x;
	printf("Enter: \n");
	scanf("%d", &x);
	for(i = x-1; i<*n;i++){
		a[i] = a[i+1];
	}
	(*n)--;
}
int main() {
	int a;
	int n;
	scanf("%d", &n);
	input(&a, n);
	Remove(&a, &n);
	output(&a, n);	
}
