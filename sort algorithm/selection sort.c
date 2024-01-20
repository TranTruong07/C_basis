#include <stdio.h>
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
void Print(int *a, int n){
	int i;
	for(i = 0; i< 10; i++){
		printf("%d  ", a[i]);
	}
}
int main() {
	int x[] = { 1, 3, 5, 7, 9, 2, 8, 0, 4, 6};
	selectionSort(&x, 10);
	Print(x, 10);
}
