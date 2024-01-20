#include<stdio.h>
int main()
{
int a,b,k,n,i;
scanf("%d",&n);

i=n-2;
	while(i>=2)
	{
		a=n-i;
		for(k=2; k<a; k++) printf(" ");
		printf("*");
		b=2*i-3;
		for(k=1; k<=b; k++) printf(" ");
		printf("*\n");
		i--;
	}
	

for(k=1; k<=n-3; k++) printf(" ");
printf("*\n");

i=2;
	while(i<n-1)
	{
		a=n-i;
		for(k=3; k<=a; k++) printf(" ");
		printf("*");
		b=2*i-3;
		for(k=1; k<=b; k++) printf(" ");
		printf("*\n");
		i++;
	}
	


}
