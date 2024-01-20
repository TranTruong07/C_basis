#include <stdio.h>
#include <stdbool.h>
int KT(int n){
	int i, j, count2 = 0;
	if(n<2){
		return 0;
	}
	for(i = n+1;i>0; i++){
		int count = 0;
		for(j = 2; j<=i/2; j++){
			if(i%j==0){
				count = 1;
			}
		}
		if(count == 0){
			printf("%d ", i);
			count2++;
			if(count2 == 3){
				return 1;
			}
		}
	}
}
int main() {
	int n; 
	scanf("%d", &n);
	KT(n);
}
