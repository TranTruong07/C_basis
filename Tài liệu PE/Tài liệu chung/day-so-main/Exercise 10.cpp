// Exercise 10.              
// s = 1/1! - 1/2! + 1/3! - 1/4! + … (-1)^(n+1) * 1/n!     Note: n>=1

#include<stdio.h>
main()
{
	int n,i;
	float temp,s=0;
	printf("Nhap n= "); scanf("%d",&n);
	temp=1; s=1;
	for(i=2;i<=n;i++) 
	{
		temp=-temp/i;
		s=s+temp;	
	}
	
	printf("Tong s= %f ",s);	
	
}


