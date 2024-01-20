#include <stdio.h>
int palindrome(int n){
	int digit, sum = 0;
	int a = n;
	while(a!=0){
		digit = a % 10;
		sum = sum * 10 + digit;
		a /= 10;
	}
	if(sum == n){
		return 1;
	}else{
		return 0;
	}
}
int main() {
	int n = 127;
	if(palindrome(n)){
		printf("%d is a palindrome number", n);
	}else{
		printf("%d is not a palindrome number", n);
	}
}
