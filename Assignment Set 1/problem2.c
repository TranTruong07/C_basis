#include <stdio.h>
void output(int a[], int n){
	int i;
	printf("\n The element in array: \n");
	for(i= 0; i< n; i++){
		printf("%4d", a[i]);
	}	
}
void sum(int a[], int n){
	int i, sum = 0;
	for(i= 0; i< n; i++){
		sum += a[i];
	}
	printf("\n The sum of array: %d\n", sum);	
}
void average(int a[], int n){
	int i, sum = 0;
	float ave;
	for(i= 0; i< n; i++){
		sum += a[i];
	}
	ave = (float)sum / n;
	printf("\n The average of array: %.2lf\n", ave);	
}
void maximum(int a[], int n){
	int i, max = a[0];
	for(i= 0; i< n; i++){
		if(a[i]>max){
			max = a[i];
		}
	}	
	printf("\n The element maximum in array: %d\n", max);
}
void minimum(int a[], int n){
	int i, min = a[0];
	for(i= 0; i< n; i++){
		if(a[i]<min){
			min = a[i];
		}
	}	
	printf("\n The element minimum in array: %d\n", min);
}
int main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int choose;
	do{
		printf("\n 1) Display the array\n 2) Find the sum of all elements in the array\n 3) Find the average of all elements in the array\n 4) Find the maximum element in the array\n 5) Find the minimum element in the array");
		printf("\nEnter your select: ");
		scanf("%d", &choose);
		switch(choose){
			case 1:
				output(a, 10);
				break;
			case 2:
				sum(a, 10);
				break;
			case 3:
				average(a, 10);
				break;
			case 4:
				maximum(a, 10);
				break;
			case 5:
				minimum(a, 10);
				break;
			default:
				break;
		}
			
		
	}while(choose > 0 && choose <= 5);
}
