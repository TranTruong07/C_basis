#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int rows, i, j, k;
	char ch;
	scanf("%d", &rows);
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 1; i <= rows; i++) {
		ch = 'A';
		for (j = 1; j <= i; j++) {
			printf("%c", ch);
			ch++;
		}
		ch -= 2;
		for (j = 1; j <= i-1; j++) {
			printf("%c", ch);
			ch--;
		}
		printf("\n");
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
