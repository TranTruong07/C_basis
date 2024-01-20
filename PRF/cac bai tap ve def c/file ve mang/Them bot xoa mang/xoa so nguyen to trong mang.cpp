////Nhap day so nguyen co n phan tu, xoa tat ca cac phan tu la so nguyen to, hien thi ham truoc xong moi xoa
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//
//int prime(int a){
//	if(a<2) return 0;
//	for(int i=2; i<=sqrt(a); i++){
//		if(a%i==0) return 0;
//    }
//    return 1;
//}
//void DisplayArr(char msg[],int a[],int n){
//	printf("%s",msg);
//	for(int i=0;i<n;i++)printf("%d\t",a[i]);
//}
//void deletePrime(int arr[], int size, int pos){
//	for(int i=pos; i<size-1; i++){
//		arr[i] = arr[i+1];
//	}
//}
//
//int main()
//{
//	int n;
//	printf("Enter the number of array: "); scanf("%d", &n);
//	int arr[n];
//	for(int i=0; i<n; i++){
//		printf("Element[%d]: ", i); scanf("%d", &arr[i]);
//	}
//    DisplayArr("Array before detele prime number:",arr,n);
//	for(int i=0; i<n; i++){
//		if(prime(arr[i])==1) deletePrime(arr, n--, i--);
//	}
////	printf("\nArray after detele prime: ");
//    DisplayArr("\nArray after detele prime:", arr,n);
//	return 0;
//}

// Xoa sp chan le trong mang
#include<stdio.h>
void DisplayArr(char msg[],int a[],int n){
	printf("%s",msg);
	for(int i=0;i<n;i++) printf("%d\t",a[i]);
}
void Deletenumber(int a[],int size, int pos){
	for(int i = pos; i<size-1;i++) a[i]=a[i+1];
	}

int main(){
	int i,size;
	printf("enter size:");scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("Position[%d]=",i);scanf("%d",&a[i]);
	}
	DisplayArr("the array before delete even number:",a,size);
	for(i=0;i<size;i++){
		if(a[i]%2==0) Deletenumber(a,size--,i--);
	}
	DisplayArr("\nthe array after delete even number:",a,size);
	return 0;
}


