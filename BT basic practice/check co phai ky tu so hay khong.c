#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char a[100];
	int count = 0;
	printf("Enter: ");
	scanf("%s", &a);
	int i;
	for(i = 0; i<strlen(a); i++){
		if(isdigit(a[i])){
			count++;
		}
	}
	printf("\n%d", count);
}
