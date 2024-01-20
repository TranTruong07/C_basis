#include<stdio.h>
#include<math.h>
int check(int n){
	while(n){
	int r=n%10;
	if(n%2==0)return 1;
	n/=10;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count =0;
	for (int i=0;i<n;i++){
		if (check(a[i]))count++;
	}
	printf("%d\n",count);
	for (int i=0;i<n;i++){
		if(check(a[i]))
		printf("%d ",a[i]);
	}
	}
