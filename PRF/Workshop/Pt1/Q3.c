//sap xep chu cai theo thu tu tu dien
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void bubbleSort(char a[],int size){
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
	for(int i=0; i<4; i++){
		scanf("%c", &a[i]);
		getchar();
	}
	bubbleSort(a,4);
	printf("\nOUTPUT:\n");
	for(int i=0; i<4; i++) printf("%c ", a[i]);
	return 0;
}



