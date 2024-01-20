// Exercise C07b. 
// Tinh sin (x)=x/1!-x^3/3!+x^5/5!+... 
#include<stdio.h>
#include<math.h>
main()
{
	int i;
	float temp,s,x,c;
	printf("Nhap c = "); scanf("%f",&c);
	printf("Nhap x = "); scanf("%f",&x);
	s=x/1; temp=x/1;
	i=3;	
	while(fabs(temp)>=c)
	{
		temp=-temp*x*x/(i*(i-1));
		s=s+temp;
		i=i+2;
	}
	printf("sin(%f) = %f ",x,s);	
	printf("\n(Ham chuan) sin(x) = %f ",sin(x));
}


