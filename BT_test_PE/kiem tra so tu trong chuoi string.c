#include <stdio.h>
#include <string.h>
int check(char a[]){
	int i, count=0;
	for(i = 0; i<strlen(a);i++){
		if(a[i]==' '){
			count++;
		}
	}
	printf("OUTPUT: \n", a);
	printf("%d", count+1);
	return count+1;
}
void input(char x[]){
	printf("Enter string: \n");
	gets(x);	
}
int main(){
	char a[100];
	//printf("Enter string: \n");
	//fgets(a, sizeof(a), stdin);
	input(a);
	check(a);
}
