// e^x = 1 + x/1! + x^2/2!+ ...+ x^n/n!     temp < c =0.0001

#include<stdio.h>

double e_mu(float x, float c)
{
	double s=1, temp=1;
	int i=1;
	
	while(temp>=c)
	{
		temp=x*temp/i;
		s=s+temp;
		i++;
	}
	
	return s;
}


main()
{
	int i;
	float c,x;
	double s;
	printf("Nhap x = "); scanf("%f",&x);
	printf("Nhap c = "); scanf("%f",&c);
	
	s=e_mu(x,c);

	
	printf("e^x = %lf ",s);	
	
}


