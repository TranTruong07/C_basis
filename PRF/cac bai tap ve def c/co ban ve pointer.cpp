//co ban ve pointer
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a=10;int b=20; int c=50;
//	printf("\nAddress A:%u",&a);
//	printf("\nAddress B:%u",&b);
//	printf("\nAddress C:%u",&c);
//	printf("\nValue: a=%d,b=%d,c=%d",a,b,c);
//	int*Pi;
//	   Pi=&c;
//	   Pi++;Pi++;
//	   Pi--;
//	   *Pi=8888;
//	   printf("\nValue: a=%d,b=%d,c=%d",a,b,c);
//	return 0;
//}

//SWAP 
//#include<stdio.h>
//#include<stdlib.h>
//void swap(int* a,int* b){
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//}
//int main(){
//	int a=10,b=20;
//	printf("\nBefore swapping: a=%d,b=%d",a,b);
//	swap(&a,&b);
//	printf("\nAfter swapping : a=%d,b%d",a,b);
//	return 0;
//}

////Xoa 1 don vi 
////SWAP 
//#include<stdio.h>
//#include<stdlib.h>
//void swap(int* a,int* b){
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//}
//void Dele(int A[],int *size,int pos){
//	int i;
//	for(i =pos;i< *size-1;i++) {
//	A[i]=A[i+1];
//    }	--*size;//khong giam ko co tac dung
//}
//int main(){
//	int size=10;
//	int i,A[]={1,2,3,4,5,6,7,8,9,10};
//	printf("\nBefore deleting: \n");
//	for(i=0;i<size;i++) printf("\t%d",A[i]);
//	Dele(A,&size,5);
//	printf("\n");
//	for(i=0; i<size;i++) printf("\t%d",A[i]);
//return 0;
//}

//them phan tu vao mang
#include<stdio.h>
#include<stdlib.h>
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void Add(int A[],int size,int pos,int value){
	int i;
	for(i=size;i>=pos;i--){
	
	A[i]=A[i-1];
	A[pos]=A[value];
}
	size++;//khong tang ko co tac dung
}
int main(){
	int size=10;
	int i,A[]={1,2,3,4,5,6,7,8,9,10};
	printf("\nBefore adding: \n");
	for(i=0;i<size;i++) printf("\t%d",A[i]);
	Add(A,size,2,8888);
	printf("\n");
	for(i=0; i<size;i++) printf("\t%d",A[i]);
return 0;
}
