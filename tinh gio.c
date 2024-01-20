#include <stdio.h>

int main(){

	int minutes;
	
	printf("Enter the length of a videotape, in minutes: "); 
	scanf("%d", &minutes);
	printf("That tape is %d hours and %d minutes long.\n", minutes/60, minutes%60);
}
