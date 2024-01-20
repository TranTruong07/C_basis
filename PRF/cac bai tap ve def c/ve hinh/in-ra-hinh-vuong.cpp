#include<stdio.h>
int vehinhvuong(int n){
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		printf("*");
	}
	printf("\n");
}
}

int vehinhvuong2(int n){
for(int i=0;i<n;i++){
	if(i==0){
	for(int j=0;j<n;j++){
		printf("*");
	}
	} else {
		printf("*");
		for(int j=0;j<n-2;j++){
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
}
}

int vehinhvuong3(int n){
	for(int i=0;i<n;i++){
	if(i==n-1||i==0){
	for(int j=0;j<n;j++){
		printf("*");
	}
	} else {
		printf("*");
		for(int j=0;j<n-2;j++){
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
}
}
int main(){
	int n;
	printf("Input n =");
	scanf("%d",&n);
	vehinhvuong2(n);
}
