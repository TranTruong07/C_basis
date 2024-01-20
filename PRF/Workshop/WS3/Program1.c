O#include<stdio.h>
#include<math.h>

int Prime(int m)
{
	for(int i=2; i<=sqrt(m); i++)
	    if(m%i==0) return 0;
	return 1;
}

int main()
{
	int n;
	do{
		printf("Enter a positive number: "); scanf("%d", &n);
	}while(n<2);
	for(int i=1; i<n; i++){
		if(Prime(i)==1) printf("%d ",i);
	}
	return 0;
}
