#include <stdio.h>
#include <string.h>
#include <conio.h>
int main() {
	int n1 = 10;
	int n2 = 33;
	char S[11];
	int n3 = 12;
	printf("Address of n1:%u\n", &n1);
	printf("Address of n2:%u\n", S);
	printf("Address of S:%u\n", &n1);
	printf("Address of n3:%u\n", &n3);
	printf("Enter a string:");
	gets(S);
	printf("n1=%d\n", n1);
	printf("n2=%d\n", n2);
	printf("String content: %s\n", S);
	printf("n1=%d\n", n3);
	getch();
	return 0;
}
