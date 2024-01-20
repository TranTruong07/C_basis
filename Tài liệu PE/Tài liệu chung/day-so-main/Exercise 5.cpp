// s = 1/1 - 1/3 + 1/5 -1/7 + … + (-1)^n  [1/(2n+1)]     Note: n>=0

#include<stdio.h>
main()
{
	int n,i,sign=1;
	float s=0;
	
	printf("Nhap n= "); scanf("%d",&n);
	
	for(i=0;i<=n;i++) 
		{
//			s=s+sign*(float)1/(2*i+1);
//			sign=-sign;
			if(i%2==0) s=s+(float)1/(2*i+1);
			else s=s-(float)1/(2*i+1);
		}
	printf("Tong s= %f ",s);	
	
}


