#include <stdio.h>
#include <math.h>
void armstrong(int n){
	int i, k, sum, digits;
	printf("chuoi: \n");
	for(i = 1; i<n; i++){
		sum = 0;
		k = i;
		while(k > 0){
			digits = k % 10;
			sum += pow(digits, count(i));
			k /= 10;
		}
		if(sum == i){
			printf("%d\t", i);
		}
	}
}
int count(int a){
	int count = 0;
	while(a!=0){
		a /= 10;
		count++;
	}
	return count;
}
int main() {
	int n; 
	printf("Nha n: ");
	scanf("%d", &n);
	armstrong(n);
}
