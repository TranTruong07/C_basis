#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  do{
  	scanf("%d", &n);
  }while(n<0);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	int i, sum=0, count = 0;
	for(i = n; i>0; i--){
		if(i%2==0){
			sum += i;
			count++;
			if(count == 3){
				printf("%d", sum);
				break;
			}
		}
	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
