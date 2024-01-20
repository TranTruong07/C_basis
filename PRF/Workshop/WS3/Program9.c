#include<stdio.h>
#include<math.h>

int gcd(int a, int b){
	while( a != b){
		if(a>b) a-=b;
		else b-=a;
		return b;
	}
}
int lcm(int a, int b){
	return a*b/gcd(a,b);
}

int main()
{
	int a,b;
	do{
		printf("Enter a: "); scanf("%d", &a);
		printf("Enter b: "); scanf("%d", &b);
	}while(a<=0 || b<=0);
	printf("GCD(%d,%d) = %d", a, b, gcd(a,b));
	printf("\nLCM(%d,%d) = %d", a, b, lcm(a,b));
}
