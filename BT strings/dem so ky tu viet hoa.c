#include <stdio.h>
int count(char str[]){
	int i, count = 0;
	for(i = 0; str[i] != 0; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			count++;
		}
	}	
	return count;
}
int main() {
	char str[50];
	gets(str);
	printf("UOTPUT: %d", count(str));
}
