#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
	float score ;
	scanf("%f", &score);
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(5.0 <= score && score < 7.0) {
		printf("Average rating with a score: %.1f ", score);
	} else if(7.0 <= score && score < 8) {
		printf("Good rating with a score: %.1f", score);
	} else if(8.0 <= score && score < 10.0) {
		printf("Excellent rating with a score: %.1f", score);
	}










  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
