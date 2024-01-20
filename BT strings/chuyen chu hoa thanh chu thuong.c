#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char str[50];
	gets(str);
	int i;
	for(i= 0; str[i]!= '\0'; i++){
		if (str[i] >= 'A' && str[i] <= 'Z') {
		str[i] = str[i] + ('a' - 'A');
		}
	}
	printf("%s", str);
}
