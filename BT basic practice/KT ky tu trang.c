#include <stdio.h>
#include <string.h>
int count(char a[]){
	int i, count = 0;
	for(i = 0; i<strlen(a); i++){
		if(a[i] == ' '){
			count++;
		}
	}
	return count+1;
}
int main(){
	char a[100] = "I love you";
	int c = count(a);
	printf("%d", c);
}
