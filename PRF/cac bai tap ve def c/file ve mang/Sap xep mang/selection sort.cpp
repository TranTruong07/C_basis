//selection 
#include<stdio.h>

void DisplayArr(char msg[],int a[], int n){
	int i;
	printf("%s",msg);
	for(i=0;i<n;i++)printf("%d ",a[i]);
}
int main(){
	int i,j,n;
	printf("enter n:");scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Postion[%d]=",i);scanf("%d",&a[i]);
	}
	DisplayArr("\nThe array before sorting:\n",a,n);
	for(int i=0; i<n; i++){  //row
		int mark_pos=i;
		for(j=i+1;j<n;j++)
		   if (a[j]<a[mark_pos])mark_pos=j; 
		if(i!=mark_pos){
			int temp=a[i];
			a[i]=a[mark_pos];
			a[mark_pos]=temp;
		}
		DisplayArr("\n",a,n);
    }   
	DisplayArr("\nThe array after sorting ascending :\n",a,n);
	return 0;
}
