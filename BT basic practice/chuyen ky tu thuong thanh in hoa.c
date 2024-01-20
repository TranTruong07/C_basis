#include <stdio.h>
#include <string.h>
#include <ctype.h>
void change2(char *a){
	int i;
	for(i = 0; i< strlen(a); i++){
		if(i%2 != 0){
			a[i] = toupper(a[i]);	//toupper: a -> A
		}							//tolower: A -> a
	}
}
void change(char *a){
	int n = strlen(a);
	int i;
	for(i = 0; i<n; i++){
		if(i%2 != 0){
			a[i] -= 32;
		}
	}
}

int main() {
	char a[20] = "hello word";
	//change(&a);
	change2(&a);
	printf("%s", a);
}
