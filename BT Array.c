#include <stdio.h>
void input(int *a, int n){
	int i;
	printf("Enter element in array: \n");
	for(i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
int max(int a[], int n){
	int i, max = 0;
	for(i = 0; i< n; i++){
		if(a[i]>max)
			max = a[i];
	}
	return max;
}
void output(int a[], int n){
	int i;
	printf("\n");
	for(i = 0; i< n; i++){
		printf("a[%d] - %d\n", i, a[i]);	
	}
}
void printEven(int a[], int n){
	int i = 0;
	printf("The element Even in array: \n");
	for(i = 0; i<n; i++){
		if(a[i]%2 == 0){
			printf("%d ", a[i]);
		}
	}
}
int main() {
	int a[5];
	int n;
	do{
		printf("Enter n: (n>0 && n <= 5)");
		scanf("%d", &n);		
	}while(n<=0 && n>5);
	input(&a, n);
	printf("The element Max in array: %d", max(&a, n));
	output(&a,n);
	printEven(&a, n);
}
