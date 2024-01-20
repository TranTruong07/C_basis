#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a;
	do{
	scanf("%d", &a);
		int cnt=0;
		int sum=0;
		for(int i=0; i<=a; i++){
			if(i%2==0){
			    ++cnt;
			    if(cnt>n-3)  
				    sum+=i;
				}			
			}
		printf("\nOUTPUT:\n");
		printf("%d", sum);
	}while(a<=0);
	return 0;
}




