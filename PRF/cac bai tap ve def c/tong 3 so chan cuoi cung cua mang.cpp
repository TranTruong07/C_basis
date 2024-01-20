#include <stdio.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	int a[100];//a[n/2+1] la du 
	int count=0;
	int sum=0;
	for(i=0;i<=n;i+=2){
			a[count++]=i;
		}
	int sc= count;
	for(j=sc-1;j>=sc-3&&j>=0;j--) sum=sum+ a[j];
	printf("%d",sum);
	return 0;
}

