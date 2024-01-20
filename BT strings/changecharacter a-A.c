#include <stdio.h>
#include <string.h>

void Changecharacter(char x[]){
	printf("Enter string: \n");
	gets(x);
	printf("String: %s\n", x);
	
}
int main() {
	char x[50];
	//printf("Enter string: \n");
	//fgets(x, sizeof(x), stdin);
	//printf("String: %s\n", x);
	Changecharacter(&x);
	//printf("String-fix: %s\n", x);
	printf("String: %s\n", x);
}
