#include<stdio.h>
#include<math.h>

int FiboCheck(int n){
	int t1=1, t2=1, f=1;
	if(n==1) return 1;
	while(n>f){
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	return n==f;
}

int main()
{
	int n;
	do{
		printf("Enter the positive number: "); scanf("%d", &n);
	}while(n<1);
	if(FiboCheck(n)) printf("It is a Fibonacci element");
	else printf("It is not a Fibonacci element");
	return 0;
}








