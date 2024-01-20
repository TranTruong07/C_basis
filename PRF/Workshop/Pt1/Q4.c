#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void swap(int *a, int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
//
void bubbleSort(int arr[], int size){
	for(int i=0; i<size; i++)
		for(int j=0; j<size-1; j++)
	        if(arr[j]>arr[j+1]) swap(&arr[j], &arr[j+1]);
}
int main()
{
	int n=7;
	int a[n];
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
    bubbleSort(a,n);
    printf("\nOUTPUT:\n");
	for(int i=0; i<n; i++) printf("%d ", a[i]);		
	return 0;
}




