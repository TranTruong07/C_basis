#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void checkperfectnumber(int n){
	int i, sum = 0;
	for(i = 1; i<=n/2; i++){
		if(n%i == 0){
			sum += i;	
		}
	}
	if(sum == n){
		printf("%d is a perfect number", n);
	}else{
		printf("%d is not a perfect number", n);
	}
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	checkperfectnumber(n);











  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
