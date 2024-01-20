// luyen tap dang ham  so nguyen to


#include<stdio.h>
#include<math.h>

int Prime(int a){
	if(a<2)
	return 0;
	
	for(int i=2; i<=sqrt(a);i++){
		if (a% i ==0)
		return 0;
	}
	return 1;
	}
	int main(){
		//khai bao 
		int n;
		printf("Enter the positive number:");scanf("%d",&n);
		//goiham
//		if(Prime(n)==0){
//			printf("the number is not prime");
//		}else printf("the number is prime");

//liet ke cac so nguyen to chay den n
    for(int i=2;i<n;i++){
	if(Prime(i)==1)printf("prime = %d\n",i);}
		return 0;
		}
		
	


