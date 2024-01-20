#include<stdio.h>
int main()
{
	int c1, c2;
	printf("Enter character 1: "); scanf("%d", &c1);
	printf("Enter character 2: "); scanf("%d", &c2);
	if(c1>c2){
		int t=c1;
		c1=c2;
		c2=t;
	}
	for(int d=c1 ; d<=c2; d++ ) printf("%c: %d, %o, %X\n", d,d,d,d);
	return 0;
}



