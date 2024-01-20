#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char str[50], b[50];
	gets(str);
	int i, j = 0;
	int n = strlen(str);
	for(i = 0; i< n; i++){
		if(isalpha(str[i])){
			b[j] = str[i];
			j++;
		}
	}
	j++;
	b[j] = '\0';
	int k = 0;
	for(i = 0; i< j; i++){
		str[i] = b[k];
		k++;
	}
	printf("%s", str);
}
