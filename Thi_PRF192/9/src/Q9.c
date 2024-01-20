#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[100];
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	if (len > 0 && str[len-1] == '\n') {
		str[--len] = '\0';
	}
	int i;
	for (i = 0; i < len; i++) {
		if (i == 0 || isspace(str[i-1])) {
			str[i] = toupper(str[i]);
		} else if (i == 1 || (i > 1 && !isalpha(str[i-2]))) {
			str[i] = toupper(str[i]);
		}
	}
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%s", str);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
