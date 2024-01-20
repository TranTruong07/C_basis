#include <stdio.h>

void checktraingle(int a, int b, int c){
	if(a + b > c && a +c > b && b + c > a){
		printf("this is a traingle");
	}else
		printf("\nthis is not traingle");
}
int main() {
	int a, b, c;
	printf("Enter a ,b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	checktraingle(a, b, c);	
}
