#include <stdio.h>
#include <string.h>
void Caesarcipher(char *str) {
	int i;
	for(i = 0; i< strlen(str); i++){
		str[i] = str[i] + 3;
	}
}
int main() {
	char str[50];
	printf("Enter string: \n");
	scanf("%s", &str);
	printf("string before Caesar cipher: \n");
	printf("%s", str);
	Caesarcipher(&str);
	printf("\nstring after Caesar cipher: \n");
	printf("%s", str);
}
