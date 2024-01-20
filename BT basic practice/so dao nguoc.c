#include <stdio.h>
int main() {
	int n = 1234;
	int digits, sum = 0;	
	while(n!=0){
		digits = n % 10;
		sum = sum * 10 + digits;
		n = n/10;
	}
	printf("so dao nguoc la: %d", sum);
}
