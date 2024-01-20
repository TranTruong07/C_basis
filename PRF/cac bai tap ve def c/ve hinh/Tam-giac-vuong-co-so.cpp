#include<stdio.h>

int intamgiacvuong(int n){
	int OE;
	for (int i=0;i<=n;i++ ){
			OE=0;
		for (int j=0;j<=i;j++){
			if(OE%2==0)
			printf("%d",OE%10);
			OE+=2;
		}
		printf("\n");
	}
}

int intamgiacvuong1(int n){
	int OE;
	OE=0;
	for (int i=0;i<=n;i++ ){
		for (int j=0;j<=i;j++){
			if(OE%2==0)
			printf("%d",OE%10);
			OE+=2;
		}
		printf("\n");
	}
}


int main (){
	int n,i,j,OE;
	scanf("%d",&n);
	intamgiacvuong(n);
	printf("\n");
	intamgiacvuong1(n);
	printf("\n");
}
