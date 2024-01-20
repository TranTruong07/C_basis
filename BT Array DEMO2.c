#include <stdio.h>
#define MAXN 100
void input(int *a, int *pn){
	*pn = 0;
	printf("Enter maximum %d elements, 0 for termination \n", MAXN);
	int x;
	do{
		scanf("%d", &x);
		if(x!=0)
			a[(*pn)++] = x;
	}while(x!=0 && *pn < MAXN);
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
		printf("%d ", a[i]);	
	}
	printf("\n");
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
	int a;
	int n;	
	input(&a, &n);
	printf("The element Max in array: %d", max(&a, n));
	output(&a,n);
	printEven(&a, n);
	
}
