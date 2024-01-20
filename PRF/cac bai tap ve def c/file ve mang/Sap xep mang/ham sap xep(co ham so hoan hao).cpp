//In ra so chan nho nhat
//#include<stdio.h>
//int main(){
//	int i,a[5];
//	for(int i=0;i<5;i++) scanf("%d",&a[i]);
//	int pos=-1;
//	for(int i=0;i<5;i++){
//		if(a[i]%2==0){
//			if(pos==-1)pos =i;
//			  if(a[pos]<a[i])a[pos]=a[i];
//		}
//	}
//  printf("\nOUTPUT:\n%d",a[pos]);	
//}
//
//Sap xe lai so chan trong mang
//#include<stdio.h>
//void bubbesort(int a[],int size){
//	int i,j;
//	for(i=0;i<size;i++)
//	   for(j=0;j<size-1;j++)
//	      if(a[j]>a[j+1]){
//		int temp =a[j];
//		a[j]=a[j+1];
//		a[j+1]=temp;
//	}
//}
//int main(){
//	int i;
//	int a[5];
//	for(i=0;i<5;i++)scanf("%d",&a[i]);
//	bubbesort(a,5);
//	printf("\nOUTPUT:\n");
//	for(i=0;i<5;i++){
//		if(a[i]%2==0){
//		printf("%d\n",a[i]);
//		}
//	}
//}

//Sap xep lai so hoan hao bang buble sort
#include<stdio.h>
int Perfect(int a){
    int sum=0;
	if (a<0)return 0;  
	for(int i=1;i<=a/2 ;i++){
 		if(a% i==0){
 			sum=sum+i;
 		    if(a==sum)return 1;}
		}return 0;
}
void bubersort(int a[],int size){
	for(int i=0;i<size;i++)
	for(int j=0;j<size-1;j++){
		if(a[j]>a[j+1]){
			int temp= a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
int main(){
	int i,size;
	printf("size:"); scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("Pos[%d]=",i);scanf("%d",&a[i]);
	}
    printf("the array before bublle sort for perfect:");
    for(i=0;i<size;i++) printf("%d\t",a[i]);
	bubersort(a,size);
	printf("the array after excute instruction:");
	
	for(i=0;i<size;i++){
      if(Perfect(a[i])==1) printf("%d\t",a[i]);}
	return 0;	
}


