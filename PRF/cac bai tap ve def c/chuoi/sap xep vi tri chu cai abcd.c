// sap xep chu cai
#include<stdio.h>
#include<string.h>
void bubbesort(char a[],int size){
	int i,j;
	char temp;
	for(i=0;i<size;i++)
	   for(j=0;j<size-1;j++)
	      if(a[j]>a[j+1]){
		temp =a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
}
int main(){
	char a[4];
	for(int i=0;i<4;i++) {
       scanf("%c",&a[i]);
	   getchar();
    }
	bubbesort(a,4);
	printf("\nOUTPUT:\n");
	for(int i=0;i<4;i++)printf("%c ",a[i]);
	return 0;
}


//#include<stdio.h>
//#include<string.h>
//int main(){
//	char c[5],temp;
//	int i,j;
//	for(i=0;i<4;i++){
//		scanf("%c",&c[i]);
//		getchar();
//	}
//	for(i=0;i<3;i++){
//		for(j=i+1;j<4;j++){
//			if(c[i]>c[j]){
//				temp=c[i];
//				c[i]=c[j];
//				c[j]=temp;
//			}
//		}
//	}
//	for(i=0;i<4;i++){
//		printf("%c ",c[i]);
//	}
//}
