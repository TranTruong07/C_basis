////bot 1 phan tu trong mang
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(){
//	int i,size;
//	srand(time(NULL));
//	printf("enter the size:");scanf("%d",&size);
//	int a[size];
//	for(i=0;i<size;i++){
////		printf("Position[%d]=",i);scanf("%d",&a[i]);
//		a[i]=rand()%21-rand()%10;
//	}
//	printf("The first array\n:");
//	for(i=0;i<size;i++)printf("%d\t",a[i]);
//	//vi tri can xoa
//	int index;
//	printf("\nenter the index:");scanf("%d",&index);
//	if(index>=0 && index<size){
//	for(i=index;i<size-1;i++) a[i]=a[i+1];
//	size--;
//	printf("the array after delete index at position %d :",index);
//	for(i=0;i<size;i++)printf("%d\t",a[i]);
//} else{
//	printf("Can not delete the element at position %d,plz check range,index");
//	printf("\nThe origin array :\n ");
//	for(i=0;i<size;i++) printf("%d\t",a[i]);
//}
//return 0;
//}

////THEM VAO 1 PHAN TU TRONG MANG
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int i,size;
//	printf("enter the size: ");scanf("%d",&size);
//	int a[size];
//	for(i=0;i<size;i++){
//		printf("the Position[%d]=",i);scanf("%d",&a[i]);
//	}
//	printf("the array:\n");
//	for(i=0;i<size;i++) printf("%d\t",a[i]);
//	//them 1 vi tri
//	int pos;
//	printf("\nenter the pos:");scanf("%d",&pos);
//	if(pos>=0 && pos<=size){
//	for(i=size;i>=pos;i--) a[i]=a[i-1];
//	size++;
//	printf("the array after bonus pos at position %d\n :",pos);
//	for(i=0;i<size;i++)printf("%d\t",a[i]);
//	}else{
//		printf("Can not insert the element at position %d,plz check range",pos);
//		printf("\nThe origin array :\n");
//		for(i=0;i<size;i++)printf("%d\t",a[i]);
//	}
//	return 0;
//}

//doi 2 vi tri trong mang
#include<stdio.h>
int main(){
	int i,size;
	printf("the size:");scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
	 printf("Position[%d]=",i);scanf("%d",&a[i]);
	}
	//goi 2 bien doi vi tri
	int pos1,pos2;
	printf("pos1:");scanf("%d",&pos1);
	printf("pos2:");scanf("%d",&pos2);
	if((pos1>=0 && pos1<size && pos2>=0 && pos2<size)&&(pos1!=pos2)){
		int temp=a[pos1];
		a[pos1]=a[pos2];
		a[pos2]=temp;
		printf("Swap:pos1=%d and pos2=%d",a[pos1],a[pos2]);
		for(i=0;i<size;i++)printf("\n%d\t",a[i]);
	}
	else{printf("can not swap 2 pos");
	}
}

