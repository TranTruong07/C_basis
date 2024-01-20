#include<stdio.h>
#include<math.h>

void printMinMaxDigits(int n){
	int remainder, min, max;
	remainder=n%10;
	n=n/10;
	min = max = remainder;
	while(n>0){
		remainder = n%10;
		n=n/10;
		if(min>remainder) min=remainder;
		if(max<remainder) max=remainder;
	}
	printf("Max: %d", max);
	printf("\nMin: %d", min);
}

int main()
{
	int n;
	do{
		printf("Enter n: "); scanf("%d", &n);
		printMinMaxDigits(n);
	}while(n<0);
	return 0;
}








