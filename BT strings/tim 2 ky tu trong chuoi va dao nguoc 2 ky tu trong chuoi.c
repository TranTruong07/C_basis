#include <stdio.h>

int main() {
	char str[10];
	int i;
	gets(str);
	char str2[3];
	gets(str2);
	for(i= 0; str[i] != '\0'; i++){
		if(str[i]==str2[0] && str[i+1] == str2[1]){
			int temp = str[i];
			str[i] = str[i+1];
			str[i+1] = temp;
		}
	}
	printf("\nOUTPUT\n");
	for(i = 0; str[i] != '\0'; i++){
		printf("%c", str[i]);
	}
}
