#include<stdio.h>
#include<math.h>
int selection(int a[],int n){
	for(int i=0;i<n;i++){
		int temp,pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[pos]) pos=j;
		}
		if(i!=pos){
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a1[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a1[i]);
	}
	int a2[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a2[i]);
	}
	int hm[n*2];
	for(int i=0;i<n;i++){
		hm[i]=a1[i];
		hm[i+n]=a2[i];
	}
	selection(hm,n*2);
	for(int i=0;i<n*2;i++){
		printf("%d ",hm[i]);
	}
}
