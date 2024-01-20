//cach tinh tong cua cac so trong mang
//#include<stdio.h>
//int main(){
//   int a[10]={2, 7, 6, 3, 4 ,8, 9, 7, 6, 10};
//   int sum=0;int i;
//   for(i=0;i<10;i++){
//   	printf("%d\t",a[i]);
//   }
//   for(i=0;i<10;i++){
//       sum = sum + a[i];
//   }
//   printf("\n%d",sum);
//return 0;
//}


//// cach tinh tong cua cac so nguyen to va liet ke no trong mangtest1
//#include<stdio.h>
//#include<math.h>
//int Prime(int n){
//	if(n<2)return 0;
//	for(int i =2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	    return 1;
//	}
//}
//int main(){
//	int i, size;
//	printf("enter the number for size :");scanf("%d",&size);
//	int a[size];
//	for(i=0;i<size;i++){
//		printf("Element[%d]=",i+1);scanf("%d",&a[i]);
//		//a[i]=rand()%101-rand()%29;
//	}
//	for(i =0;i<size;i++){
//		if(Prime(a[i]))printf("the prime number in positon :%d_%d\n",i,a[i]);
//	}
//}


////TINHSONGUYENTOMINTRONGMANG
//#include<stdio.h>
//#include<math.h>
//int Prime(int n){
//	if(n<2)return 0;
//	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
//	return 1;
//}
//int main(){
//	int i,size;
//	int a[i];
//	printf("enter the size of array:");scanf("%d",&size);
//	for(i=0;i<size;i++){
//	printf("Element[%d]=",i+1);scanf("%d",&a[i]);
//    }
//    //printf out 
//    int pos=-1;
//    for(i=0;i<size;i++){
//    	if(Prime(a[i])==1){
//    		if(pos==-1)pos =i;
//    		if(a[i]<a[pos])a[pos]=a[i];
//		}
//	} 
//    if(pos==-1)printf("\nThere is no Prime number in the array!");
//	else printf("\nThe minimum prime number is %d,at position %d",a[pos],pos);
//	return 0;
//}   
//// tinh so cac so nguyen to
//#include<stdio.h>
//#include<math.h>
//
//int Prime(int n){
//	if(n<=1) return 0;
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0) return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n, i, count=0;
//	printf("Enter n: "); scanf("%d", &n);
//	int arr[n];
//	for(int i=0; i<n; i++){
//		printf("Element[%d]: ", i+1); scanf("%d", &arr[i]);
//	}
//	for(int i=0; i<n; i++){
//		if(Prime(arr[i])) ++count;	
//	}
//    if(count==0) printf("There is no prime number in the array");
//    else{
//    	printf(count==1?"\nThere is ":"\nThere are ");
//    	printf("%d prime number, at position  ",count);
//    	for(int i=0; i<n; i++)
//    	    if(Prime(arr[i])) printf("%d   ", i+1);
//	}
//	return 0;
//}


// trung binh cong so nt
//#include<stdio.h>
//#include<math.h>
//int prime(int n){
//	if(n<=1) return 0;
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0) return 0;
//	}
//	return 1;
//}
//int main(){
//	int n;
//	printf("Enter n: "); scanf("%d", &n);
//	int arr[n];
//	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
//	int sum=0;
//	int count=0;
//	for(int i=0; i<n; i++){
//		if(prime(arr[i])){
//			count++;
//		    sum+=arr[i];
//		}
//	}
//	double average;
//	average = 1.0*sum/count;
//	if(count==0) printf("There is no prime number");
//	else printf("The average of prime in array = %lf", average);
//	return 0;
//}

//phan tich 1 so thanh so nguyen to
#include<stdio.h>
#include<math.h>

void phantich(int n){
	for(int i=2;i<=sqrt(n); i++){
		while(n%i==0){
			printf("%d ", i);
			n/=i;
		}
	}
	if(n!=1)
	    printf("%d",n);
}
int main()
{
	int n;
	scanf("%d", &n);
	phantich(n);
	return 0;
}

//So nguyen to tiep theo
#include<stdio.h>
#include<math.h>
int main(){
	int n, nextPrime;
	scanf("%d", &n);
	nextPrime = n + 1;
while(1) {
    int isPrime = 1;
    for (int i = 2; i <= sqrt(nextPrime); i++)
        if (nextPrime % i == 0){
            isPrime = 0;
            break;
        }
    if (isPrime) {
        printf("So nguyen to tiep theo la: %d", nextPrime);
        break;
        }
    nextPrime++;
    }
	return 0;
}

//so nguyen to dung truoc 
#include<stdio.h>
#include<math.h>
int prime(int n){
	if(n<=1) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int prevPrime = -1;
    for(int i = n - 1; i >= 2; i--)
        if(prime(i)){
            if(n % i != 0){
                prevPrime = i;
                break;
            }
        }
    if(prevPrime != -1) printf("So nguyen to dung truoc la: %d", prevPrime);
    else printf("Khong tim thay so nguyen to dung truoc");
    return 0;
}


