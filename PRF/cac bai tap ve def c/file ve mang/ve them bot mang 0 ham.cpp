////bot 1 vi tri
//#include<stdio.h>
//int main(){
//	int i,size;
//	printf("enter the size:");scanf("%d",&size);
//	int a[size];
//	for(i=0;i<size;i++){
//		printf("Position[%d]=",i);scanf("%d",&a[i]);
//	}
//	printf("The first array :\n");
//	for(i=0;i<size;i++)printf("%d\t",a[i]);
//	//Bot 1 thanh phan trong mang goi vi tri thay 
//	int pos;
//	printf("\nenter the pos:");scanf("%d",&pos);
//	if(pos>=0 && pos<size){
//		for(i=pos;pos<size-1;i++)a[i]=a[i+1];
//		size--;
//		printf("the array after delete pos %d\n",pos);
//		for(i=0;i<size;i++)printf("%d\t",a[i]);
//	}else{
//		printf("Can't delete the postion in %d\n",pos);
//		printf("the origin array :\n");
//		for(i=0;i<size;i++)printf("%d\t",a[i]);
//	}
//}

//them 1 vi tri 
#include<stdio.h>
int main(){
	int i,size;
	printf("enter the size:");scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("enter the pos[%d]=",i);scanf("%d",&a[i]);
	}
	printf("the first array:\n");
	for(i=0;i<size;i++)printf("%d\t",a[i]);
    //goi vi tri them 
    int pos;
    printf("\nenter the pos :");scanf("%d",&pos);
    if(pos>=0&&pos<=size){
    	for(i=size;i>=pos;i--)a[i]=a[i-1];
    size++;
    printf("the new array after add postion:\n",pos);
    for(i=0;i<size;i++)printf("%d\t",a[i]);
	}
	else{
		printf("Can't add the pos\n");
		printf("the origin array :\n");
		for(i=0;i<size;i++)printf("%d\t",a[i]);
	}
	return 0;
}
