// Exercise 8
// s = 1/2! + 1/4! + … + 1/2n!              Note: n>=1

#include<stdio.h>
main()
{
	int n,i;
	float temp,s=0;
	printf("Nhap n= "); scanf("%d",&n);
	temp=1; s=0;
	for(i=2;i<=2*n;i=i+2) 
	{
		temp=temp/(i*(i-1));
		s=s+temp;	
	}
	
	printf("Tong s= %f ",s);	
	
}


