//#include<stdio.h>
//#include<math.h>
//int even(int n){
//if(n<0)return 0;
//if(n%2==0)return 1;
//else return 0;
//}
//int main(){
//    int i,n;
//    printf("size:");scanf("%d",&n);
//    int a[n];
//    for(i=0;i<n;i++){
//    printf("Postion[%d]=",i);scanf("%d",&a[i]);
//    }
//    for(i=0;i<n;i++){
//        if(even(a[i])==1)printf("%d\t",a[i]);    
//    }
//    return 0;
//}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int size, i, j;
	printf("Enter the size of Array: "); scanf("%d", &size);
	int arr[size];
	for(int i=0; i<size; i++){
		printf("Element[%d]: ", i); scanf("%d", &arr[i]);		
	}
	printf("Array before: ");
	for(int i=0; i<size; i++)
		printf("%d ", arr[i]); 		
	
	for(int i=0; i<size; +i+)  //row
		for(j=0; j<size-1; j++){  //colom
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			    }
	    }
    printf("\nArray after: ");			    
	for(int i=0; i<size; i++)		    
	    printf("%d ", arr[i]);		    
	return 0;
}

// quicksort heapsort mergesort
#include<stdio.h>
int mang(int a[],int n){
	int i;
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
}
int tangdan(int a[],int n){
    int value,i,j;
    printf("mang ban dau: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n;i++){
    	value=a[i];
    	j=i-1;
    	while(j>=0&&value<a[j]){
    		a[j+1]=a[j];
    		j--;
		}
		a[j+1]=value;
	}
	printf("mang sau khi sap xep:\n");
	mang(a,n);
}
int tangdanselection(int a[],int n){
	int i,j,tmp;
	printf("mang ban dau: \n");
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		int mark_pos=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[mark_pos]) mark_pos=j;
		}
		if(i!=mark_pos){
		   tmp=a[i];
		   a[i]=a[mark_pos];
		   a[mark_pos]=tmp;	
		}
	}
	mang(a,n);
}
 
int main(){
	int j,i,n,tmp;
	printf("nhap vao so luong phan tu mang: ");
	scanf("%d",&n);
	int a[n];
	tangdan(a,n);
	printf("\n");
	tangdanselection(a,n);
	
}


