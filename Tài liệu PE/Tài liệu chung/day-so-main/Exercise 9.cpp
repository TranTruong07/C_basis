// Exercise 8
// Exercise 9. 
// s = 1/1! + 1/3! + 1/5! + … + 1/2n+1!              Note: n>=0

#include<stdio.h>
main()
{
	int n,i;
	float temp,s=0;
	printf("Nhap n= "); scanf("%d",&n);
	temp=1; s=1;
	for(i=3;i<=2*n+1;i=i+2) 
	{
		temp=temp/(i*(i-1));
		s=s+temp;	
	}
	
	printf("Tong s= %f ",s);	
	
}


