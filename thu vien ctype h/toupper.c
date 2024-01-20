#include <stdio.h>
#include <ctype.h>
int main(){
	char name[50];
	gets(name);
	int i;
	for(i = 0; name[i] != '\0';i++){
		printf("%c", isupper(name[i])? name[i]: toupper(name[i]));
	}
}
