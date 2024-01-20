
#include<stdio.h>
int main()
{
	int x;
	int S=0;
	do{
		printf("Enter x: ");
		scanf("%d",&x);
		S+=x;
	}while(x!=0);
	printf("%d",S);
	return 0;
}





















