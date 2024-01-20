#include<stdio.h>
#include<math.h>

int sumDigits(int n){
	int sum=0;
	do{
		int remainder = n%10;
		n=n/10;
		sum+=remainder;
	}while(n>0);
	return sum;
}

int main()
{
	int n;
	int S=0;
	do{
		printf("Enter positive number: "); scanf("%d", &n);
		if(n>=0){
			S=sumDigits(n);
			printf("Sum digits of %d = %d\n",n, S);
		}
	}while(n>=0);
	return 0;
}









