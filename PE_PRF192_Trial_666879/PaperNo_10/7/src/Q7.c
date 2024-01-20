#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[20];
	int i, len;
	do{
		gets(str);
		len = strlen(str);
	}while(len%2==0|| len <=5|| len>=20);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  len -= 5;
	for(i = len/2; i< len/2+5; i++){
		if(islower(str[i])){
			printf("%c", str[i]);
		}
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
