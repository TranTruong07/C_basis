//Nhap day so nguyen co n phan tu, xoa tat ca cac phan tu la so nguyen to, hien thi ham truoc xong moi xoa
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int prime(int a){
	if(a<2) return 0;
	for(int i=2; i<=sqrt(a); i++){
		if(a%i==0) return 0;
    }
    return 1;
}
void DisplayArr(char msg[],int a[],int n){
	printf("%s",msg);
	for(int i=0;i<n;i++)printf("%d\t",a[i]);
}
void deletePrime(int arr[], int size, int pos){
	for(int i=pos; i<size-1; i++){
		arr[i] = arr[i+1];
	}
}

int main()
{
	int n;
	printf("Enter the number of array: "); scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Element[%d]: ", i); scanf("%d", &arr[i]);
	}
    DisplayArr("Array before detele prime number:",arr,n);
	for(int i=0; i<n; i++){
		if(prime(arr[i])==1) deletePrime(arr, n--, i--);
	}
//	printf("\nArray after detele prime: ");
    DisplayArr("\nArray after detele prime:", arr,n);
	return 0;
}
