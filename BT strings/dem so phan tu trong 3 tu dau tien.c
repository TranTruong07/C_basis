#include <stdio.h>

int main() {
	char str[50];
	int temp = 0, count = 0, i;
	gets(str);
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] != ' ' && temp < 3){
			while(str[i] != ' '){
				count++;
				i++;
			}
			temp++;
		}
	}
	printf("OUTPUT: %d", count);
}
