//Bai tap ve ham so 

#include<stdio.h>
int SumInRange(int);

int main(){
int i, n, sum = 0;
printf("enter a positive: ");scanf("%d",&n);

	printf("\nResult: 1+2+3+...+%d=%d",n,SumInRange(n));
	
	return 0;
}

int SumInRange(int haha){
	int i, sum=0;
	for(i=1; i<=haha; i++)
	sum+=i;
	return sum;
}





	


