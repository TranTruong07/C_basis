#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[5];
	int i;
	for(i = 0; i< 5; i++){
		scanf("%d", &a[i]);
	}
	int count1 = 0, count2 = 0;
	for(i = 0; i< 5; i++){
		if(a[i]%2==0){
			count1++;
		}else{
			count2++;
		}
	}
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d\n%d", count1, count2);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
