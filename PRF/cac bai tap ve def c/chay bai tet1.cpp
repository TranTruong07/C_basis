////Question PE 3
////ex1
//#include<stdio.h>
//int main(){
//	float a,b;
//	scanf("%f",&a);
//	scanf("%f",&b);
//	printf("OUTPUT:\n");
//	if(a>b) printf("float a>b");
//	else printf("float a<=b");
//	
//	return 0;
//}

////ex 2
//#include<stdio.h>
//int main(){
// int n;
// int product=1;
// scanf("%d",&n);
// for(int i=2;i<= n/2;i++){
// 	if(i%2==0) product=product * i;
//}printf("OUTPUT:\n%d",product);
// return 0;
//}

//ex3 sap xep lai vi tri ham
#include<stdio.h>

void insertion(int size,float a[]){
	for(int i=1;i<size;i++){
		float value=a[i]; int j=i-1;
		while(j>=0 && value<a[j]){// chan truong hop j khong ra ngoai mang, 
		a[j+1]=a[j];// dich phan tu o vi tri j sang ben phai
		--j;// giam vi tri de xet vi tri tiep
	}
	a[j+1]=value;
	}
//	for(int i=0;i<size;i++){
//		printf("%d ",a[i]);
//}
}
int main(){
	float a[5];int i=0;
	for(i=0;i<5;i++){
	    scanf("%f",&a[i]);}
	insertion(5,a);
	printf("\nOUTPUT:\n");
	for(i=0;i<5;i++){
		printf("%f ",a[i]);
	}
	return 0;
}

//ex4
//ex5
//#include<stdio.h>
//int main(){
//	int n;
//	int sum=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++)scanf("%d",&a[i]);
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0)	sum=sum+a[i]*a[i];
//	}
//	printf("\nOUTPUT:\n");
//	printf("%d",sum);
//}

//ex6

//#include<stdio.h>
//int sumDigits(int n){
//	int sum =0; //initialize sum of digits
//	do{
//		int remainder = n%10;
//		n = n/10;
//		sum = sum + remainder;
//	}while(n>0);
//	return sum;
//}
//
//int main(){
//	int n;
//	do{
//    	scanf("%d",&n);
//    	printf("\nOUTPUT:\n");
//    	if(n>=0)printf("%d", sumDigits(n));
//	}while(n>=0);	
//}

////ex10
//#include<stdio.h>
//#include<math.h>
//int Prime(int n){
//	int i;
//	if(n<2)return 0;
//	for( i =2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}return 1;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("\nOUTPUT:\n");
//	if(Prime(n)==1) printf("not Prime");
//	else printf("Prime");
//	return 0;
//}

//ex8
//#include<stdio.h>
//int main(){
//	char x;
//	scanf("%c",&x);
//	printf("\nOUTPUT:\n");
//	printf("%d %#o",x,x);
//	return 0;
//}



