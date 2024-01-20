#include<stdio.h>
#include<math.h>
//goi ham so nguyen to 
int Prime(int a){
	if(a<2)return 0;
//dung vong lap xu ly dieu kien de lam so nguyen to	
	for(int i=2; i<=sqrt(a);i++){
	   if(a%i==0)return 0;
	   }return 1;
	}
	int main(){
	//khai bao bien 
	int n;
	printf("enter count prime number: ");scanf("%d",&n);
	int count =0;//dem tong cac so nguyen to
	int i=2;//xet so nguyen to bat dau tu 2
    
	while(count<n){
		if(Prime(i)==1){
		  printf("%d ",i);
		  count++;
	}
	i++;
	}
	return 0;
	}
