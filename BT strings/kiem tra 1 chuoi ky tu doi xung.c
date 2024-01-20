#include <stdio.h>
#include <string.h>

int KTkytudoixung(char str[]){
	int n = strlen(str);
	int i;
	for(i = 0; i< n; i++){
		if(str[i] != str[n-i-1]){
			return 0;
		}
	}
	return 1;	
}
int main() {
	char str[100];
	gets(str);
	if(KTkytudoixung(str)){
		printf("doi xung");
	}else{
		printf("khong doi xung");
	}
}
