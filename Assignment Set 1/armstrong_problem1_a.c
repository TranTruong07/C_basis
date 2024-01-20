#include <stdio.h>
#include <math.h>
int main() {
	int a = 1000;
	int sum, digits, i, k, count;
	printf("The element in number armstrong list form to 1 --> 1000:\n");
	for(i = 1; i<= 1000; i++){
		k = i;
		sum = 0;
		// dêm sô phan tu
		count = (int)log10(k) + 1;
		while(k > 0){
			digits = k % 10;
			sum += pow(digits, count);
			k /= 10;
		}
		if(i == sum){
			printf("%d\n", i);	
		}
	}
}

