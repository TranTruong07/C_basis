// e^x = 1 + x/1! + x^2/2!+ ...+ x^n/n!     temp < c =0.0001

#include<stdio.h>
main()
{
	int i;
	float c,x,temp,s;
	printf("Nhap x = "); scanf("%f",&x);
	printf("Nhap c = "); scanf("%f",&c);
	
	s=1;
	temp=1;
	i=1;
	while(temp>=c)
	{
		temp=x*temp/i;
		s=s+temp;
		i++;
	}
	
	printf("e^x = %f ",s);	
	
}


