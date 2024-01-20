#include<stdio.h>
int main()
{
	int x,y,t;
	do{
		
		printf("Enter x: ");
		scanf("%d",&x);
		printf("Enter y: ");
		scanf("%d",&y);
		t=y;
		y=x;
		x=t;
		printf("x = %d \ny = %d\n",x,y);
		
	}while(x!=0 && y!=0);
	return 0;
}


