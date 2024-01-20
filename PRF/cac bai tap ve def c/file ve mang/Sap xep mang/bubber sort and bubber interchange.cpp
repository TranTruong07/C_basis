//Bubble sort
#include<stdio.h>

void DisplayArr(int a[], int n){
	int i;
	for(i=0;i<n;i++) printf("%d ",a[i]);
}
int main(){
	int i,j,n;
	printf("enter n:");scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Postion[%d]=",i);scanf("%d",&a[i]);
	}
	DisplayArr(a,n);
	printf("\n");
	for(int i=0; i<n; i++)  //row
		for(j=0; j<n-1; j++){ //colom
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			    }
			    DisplayArr(a,n);
			    printf("\n");
			}
	DisplayArr(a,n);
}
//Buble inter change
//code bo sung
//for(i=0;i<size;i++)
//for(j=0;j<size;j++){
//	if(a[i]>a[j]){
//		int temp=a[i];
//		a[i]=a[j];
//		a[j]=temp;
//	}
//}

