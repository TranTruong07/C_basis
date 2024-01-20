#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int check(int a[], int n){
	int i;
	for(i = 0 ; i<n/2; i++){
		if(a[i] != a[n-1-i]){
			return 0;
		}
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[20];
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	if(check(a, n)==1){
		printf("1");
	}else{
		printf("0");
	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
