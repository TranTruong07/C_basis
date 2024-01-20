#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	int odd[100],even[100];
	int j=0,k=0;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			even[j]=a[i];
			j++;
		}else{
			odd[k]=a[i];
			k++;
		}
	}
	for(i=0;i<j;i++){
		printf("%d ",even[i]);
	}
	printf("\n");
	for(i=0;i<k;i++){
		printf("%d ",odd[i]);
	}
}
