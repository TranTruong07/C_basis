#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void selectionSort(char *a, int n){
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
	char a[4];
	int i;
	for(i = 0; i<4; i++){
		fflush(stdin);
		scanf("%c", &a[i]);
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	selectionSort(&a, 4);
	
	for(i = 0; i<4; i++){
		printf("%c ", a[i]);
	}





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
