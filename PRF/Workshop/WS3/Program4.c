#include<stdio.h>
#include<math.h>

int factorial(int n){
	int fac=1; 
	for(int i=1; i<=n; i++) fac*=i;
	return fac;
}

int main()
{
	int n;
	do{
		printf("Enter a positive number: "); scanf("%d",&n);
	}while(n<0);
	printf("n! = %lld", factorial(n));
	return 0;
}
