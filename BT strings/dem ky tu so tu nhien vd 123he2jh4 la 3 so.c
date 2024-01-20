#include <stdio.h>
int count(char str[]){
	int i, temp = 0;
	for(i = 0; str[i] != 0; i++){
		if(isdigit(str[i])&& str[i] != '\0'){
			while(isdigit(str[i])){
				i++;
			}
			temp++;
		}
	}	
	return temp;
}
int main() {
	char str[50];
	gets(str);
	printf("UOTPUT: %d", count(str));
}
