#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[7];
	int i;
	for(i = 0; i<7; i++){
		scanf("%d", &a[i]);
	}
	selectionSort(&a, 7);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i = 0; i<7; i++){
		printf("%d ", a[i]);
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
