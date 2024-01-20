#include<stdio.h>
#include<math.h>
int xoamang(int index,int a[],int size){
	if(index<0||index>=size){
		printf("Vi tri khong hop le"); 
		return -1;
	}
	for (int i=index-1;i<size-1;i++){
		a[i]=a[i+1];
	}
	printf("Da xoa phan tu tai vi tri %d\n",index);
}
int main(){
	int i,size;
	printf("So luong phan tu cua mang : ");scanf("%d",&size);
	int a[size];
	printf("Nhap cac phan tu cua mang: ");
    for (int i=0;i<size;i++){
    	scanf("%d",&a[i]);
	}
	int index;
	printf("NHap vi tri muon xoa trong mang: ");scanf("%d",&index);
	int result=xoamang(index,a,size);
	if(result==-1){
		return -1;
	}
	printf("Mang sau khi da xoa : ");
	for (int i=0;i<size-1;i++){
		printf("%d ",a[i]);
	}
}

