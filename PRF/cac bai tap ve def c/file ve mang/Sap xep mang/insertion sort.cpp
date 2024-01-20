//thuat toan insertion

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
	for(int i=1; i<n; i++){  //row
	int value=a[i];
	j=i-1;
	while(j>=0&&value<a[j]){
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=value;
//	DisplayArr("\n",a,n);
    }   
	DisplayArr("\nThe array after sorting ascending :\n",a,n);
	return 0;
}
//ham insertion sort
//void insersionSort(int arr[], int N)
//{
//    int i, j, temp;
//    for (i = 1; i < N; i++){
//        j = i - 1;
//        temp = arr[i];
//        while(arr[j] > temp && j >= 0){
//           arr[j+1] = arr[j];
//           j--;
//        }
//        arr[j+1] = temp;
//   }
//}
