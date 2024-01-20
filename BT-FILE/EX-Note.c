#include <stdio.h>

int main() {
	FILE *f;
	f = fopen("Note.txt", "r");
	int a = 5;
	fscanf(f,"%d",&a);
	//fprintf(f,"%d", a);
	
	fclose(f);
	
}
