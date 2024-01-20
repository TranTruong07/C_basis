#include <stdio.h>
#include <string.h>

void changestring(char *s){
	int len = strlen(s);
	int i;
	char *s1 = (char*)malloc(100*sizeof(char));
	int j = 0;
	for(i = 0; i< len; i++){
		s1[j] = s[i];
		j++;
		if(i%3==2&&i!=len-1){
			s1[j] = '-';
			j++;
		}
	}
	j++;
	s1[j] = '\0';
	for(i = 0; i< strlen(s1); i++){
		printf("%c", s1[i]);
	}
}

int main() {
	char str[20];
	printf("Enter string: ");
	gets(str);
	changestring(&str);
}
