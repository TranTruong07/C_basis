#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int findmax(int a[], int n){
	int i;
	int j;
	int max = a[0];
	for(j = 0; j<n; j++){
		if(a[j] > max&&a[j] % 2==0){
				max = a[j];
				i = j;
			}
	}
	return i;
}
int findmin(int a[], int n){
	int i;
	int j;
	int min = a[0];
	for(j = 0; j<n; j++){
		if(a[j] < min&&a[j] % 2==0){
				min = a[j];
				i = j;
			}
	}
	return i;
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	int i, a[n];
	for(i = 0; i< n; i++){
		scanf("%d", &a[i]);
	}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	swap(&a[findmax(a, n)], &a[findmin(a, n)]);
	int j;
	for(j = 0; j<n; j++){
		printf("%d ", a[j]);
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
