#include <stdio.h>
#include<math.h>
// Chen vi tri khi mang chua sap xep
//int main(){
//	int i,n;
//	int newValue;
//	scanf("%d",&n);
//	int a[n];
//	for( i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("Nhap phan tu muon chen: ");scanf("%d",&newValue);
//	for( i=0;i<n;i++){
//		if(a[i]>newValue){
//		break;
//	}
//	}
//	int j;
//	for(j=n;j > i;j--){
//		a[j]=a[j-1];
//	}
//	a[i]=newValue;
//	for( i=0;i<n+1;i++){
//		printf("%d ",a[i]);
//	}
//}
//Chen vi tri khi dap sap xep
int selection(int a[],int size){
	int i,j;
	for(i=0;i<size;i++){
		int pos=i;
		for(int j=i+1;j<size;j++){
			if(a[j]<a[pos]) pos=j;
		}
		if(i!=pos){
			int temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
			
		}
	}
}
int main(){
	int i,n;
	int newValue;
	scanf("%d",&n);
	int a[n];
	for( i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Nhap phan tu muon chen: ");scanf("%d",&newValue);
	selection(a,n);
	for( i=0;i<n;i++){
		if(a[i]>newValue){
		break;
	}
	}
	int j;
	for(j=n;j > i;j--){
		a[j]=a[j-1];
	}
	a[i]=newValue;
	for( i=0;i<n+1;i++){
		printf("%d ",a[i]);
	}
}
	
