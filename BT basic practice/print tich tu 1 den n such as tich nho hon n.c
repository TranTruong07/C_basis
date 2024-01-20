#include <stdio.h>
void print(int n){
	int i, even, product = 1;
	for(i = 1; i<n; i++){
		if(i%2==0){
			product *= i;
			if(product > n){
				printf("%d", product/i);
				break;
			}
		}
	}
}
int main() {
	int n = 9;
	print(n);
}
