#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *ptr;
	ptr = fopen("Test.txt", "r");
	if(ptr == NULL){
		printf("\nErro!");
		return 1;
	}
	int i, a;
	for(i = 0; i<5; i++){
		fscanf(ptr, "%d", a);
	}
	fclose(ptr);
}
