// Exercise C07b. 
// Tinh sin (x)=x/1!-x^3/3!+x^5/5!+... 
#include<stdio.h>
#include<math.h>

main()
{
	int n,i;
	float temp,s,x;
	printf("Nhap n = "); scanf("%d",&n);
	printf("Nhap x = "); scanf("%f",&x);
	s=x/1; temp=x/1;	
	for(i=3;i<=2*n+1;i=i+2) 
	{
		temp=-temp*x*x/(i*(i-1));
		s=s+temp;
	}
	printf("sin(%f) = %f ",x,s);	
	printf("\n(Ham chuan) sin(x) = %f ",sin(x));
		
	
}


