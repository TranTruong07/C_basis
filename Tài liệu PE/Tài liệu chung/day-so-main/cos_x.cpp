// cos_x = 1 - x^2/2! + x^4/4!- ...+ (-1)^n x^2n/(2n)!     temp = x^2i / (2i)! < c =0.0001

#include<stdio.h>
#include<math.h>

main()
{
	int i;
	float c,x,temp,s;
	printf("Nhap x = "); scanf("%f",&x);
	printf("Nhap c = "); scanf("%f",&c);
	
	s=1;
	temp=1;
	i=2;
	while(temp>=c)
	{
		temp=x*x*temp/(i*(i-1));
		if(i%4!=0) s=s-temp;
			else s=s+temp;
		i=i+2;
	}
	
	printf("\ncos_x = %f ",s);
	printf("\n(Ham chuan) cos_x = %f ",cos(x));
		
	
}


