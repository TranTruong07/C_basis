// Exercise 7. 
//  s = 1/1! + 1/2! + … + 1/n!   Note: n>=1

#include<stdio.h>
main()
{
	int n,i;
	float temp, s;
	printf("Nhap n= "); scanf("%d",&n);
	
	s=1;
	temp=1;
	for(i=2;i<=n;i++)
	{
		temp=temp/i;
		s=s+temp;
	}
	
	printf("Tong s= %f ",s);	
	
}


