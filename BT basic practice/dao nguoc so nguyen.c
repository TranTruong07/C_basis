#include <stdio.h>

int main() {
	int a = 1234;
	int digit, sum = 0;
	while(a!=0){
		digit = a % 10;
		sum = sum * 10 + digit;
		a/=10;
	}
	printf("OUTPUT: \n");
	printf("%d", sum);
}
