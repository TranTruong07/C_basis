#include <stdio.h>
void input(int *a, int n){
	int i;
	printf("Enter element: \n");
	for(i = 0; i< n; i++){
		scanf("%d", &a[i]);
	}
}
void selectionSort(int *a, int n){
	int minindex;
	int i, j, t;
	for(i = 0; i< n-1; i++){
		minindex = i;
		for(j = i+1; j< n; j++){
			if(a[j]<a[minindex])
				minindex = j;						
		}
		if(minindex>i){
				t = a[minindex];
				a[minindex] = a[i];
				a[i] = t;
			}
	}
}
void output(int a[], int n){
	int i;
	for(i = 0; i< n; i++){
		printf("%d  ", a[i]);
	}
}
int main() {
	int a[5];
	input(&a, 5);
	selectionSort(&a, 5);
	printf("\n");
	output(a, 5);
}
