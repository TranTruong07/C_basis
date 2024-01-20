#include <stdio.h>

int main() {
	char str[100];
	gets(str);
	char temp[50][50];
	int count = 0;
	int i, j;
	for(i = 0; str[i] != '\0'; i++){
		j = 0;
		while(str[i] != ' ' && str[i] != '\0'){
			temp[count][j] = str[i];
			i++;
			j++;
		}
		temp[count][j] = '\0';
		if(temp[count][0] == 'h' && temp[count][j-1] == 'g'){
			count++;
		}
		
	}
	printf("%d", count);
}
