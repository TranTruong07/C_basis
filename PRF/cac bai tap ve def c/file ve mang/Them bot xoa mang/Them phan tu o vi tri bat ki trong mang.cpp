#include<stdio.h>
#include<math.h>
int themmang(int index,int value,int a[],int size){
	if(index<0||index>size){ printf("Vi tri khong hop le");
	return -1;
}
	for (int i=size;i>index;i--){
		a[i]=a[i-1];
	}
	a[index]=value;
	printf("Da them phan tu tai vi tri %d\n",index);
	
}
int main(){
	int i,size;
	printf("Nhap kich thuoc mang: ");
	scanf("%d",&size);
	int a[size];
	printf("Nhap phan tu cua mang: ");
	for(int i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	int index,value;
	printf("Nhap vi tri muon them: ");
	scanf("%d",&index);
	printf("Nhap gia tri muon them: ");
	scanf("%d",&value);
	if(index<0||index>size){ printf("Vi tri khong hop le");
}else{
	for (int i=size;i>index;i--){
		a[i]=a[i-1];
	}
	a[index]=value;
	size++;
	printf("Da them phan tu tai vi tri %d\n",index);
	printf("Mang sau khi da them la:\n ");
		for(int i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
}
