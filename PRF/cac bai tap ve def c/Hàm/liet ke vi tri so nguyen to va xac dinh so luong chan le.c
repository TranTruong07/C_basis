////bai tap co ban ve mang
//#include<stdio.h>
//int main(){
//	int ArrI[5];//20byte
//	int ArrI1[]={10,-45,43,9,4};//20byte
//	int ArrI2[5]={-10};
//	int ArrI3[5]={-10,};
//	int Arr2D[3][4];// 48byte 1 interge co 4 byte
//	int Arr2D1[3][4]={{1,2,3,4},{10,30,40,50},{100}};
//	
////	int i,j;
////	for(i=0;i<5;i++)
////	printf("%d\t",ArrI2[i]);
//
//int i,j;
//for(i=0;i<3;i++){
//	for(j=0;j<4;j++)
//	printf("%d\t",Arr2D1[i][j]);
//	printf("\n");
//}
//return 0;
//}


//thong bao so luong so chan so le
#include<stdio.h>
int main(){
	int i,size,count=0,countt=0;
	printf("enter the size :");scanf("%d",&size);
	int ArrI[size];//20byte
    for(i=0;i<size;i++){
    	printf("Element[%d]=",i+1);scanf("%d",&ArrI[i]);
	}
	for(i=0;i<size;i++){
	printf("%d\t",ArrI[i]);
	if(ArrI[i]%2==0){
	 count++;
}else countt++;
	 }
	  printf("\nthe number is even : %d",count);
	  printf("\nthe number is odd:%d",countt);      	   
return 0;
}

////lap mmang de chon cac so liet ke cac so nguyen to o vi tri nao trong mang 
//#include<stdio.h>
//#include<math.h>
//int Prime(int n){
//	if(n<=1)return 0;
//	for(int i=2;i<=sqrt(n);i++){
//		if(n % i==0)return 0;
//	}return 1;
//}
//int main(){
//	int i,size;
//    printf("enter the size:");scanf("%d",&size);
//	int ArrI[size];
//	for(i=0;i<size;i++){
//		printf("Element[%d]=",i+1);scanf("%d",&ArrI[i]);
//	if(Prime(ArrI[i])==1)printf("\nThe prime number: %d_%d\n",i,ArrI[i]);
//    }
//
//	 return 0;
//	}

