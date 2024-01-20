#include <stdio.h>
int check(int n){
	int sum = 0, i;
	for(i = 1; i<= n; i++){
		sum += i;
		if(sum>n){
			return --i;
		}
	}
}
int main() {
	int n = 20, sum = 0, i;
	printf("%d", check(n));
}
