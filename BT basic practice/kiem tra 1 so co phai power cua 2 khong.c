#include <stdio.h>
int checkpow(int n){
	if(n%2!=0){
		return 0;
	}
	int a = 1, count = 0;
	while(a != n && a < n){
		a *= 2;
		count++;
	}
	if(a == n){
		return count;
	}else{
		return 0;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	printf("\nOUTPUT:\n");
	if(checkpow(n) == 0){
		printf("%d is not a power of 2", n);
	}else
		printf("%d", checkpow(n));
}
