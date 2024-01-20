#include <stdio.h>
#include <math.h>
#include <string.h>
#define Pi 3.14159
float check1(float r){
	printf("Enter r: ");
	scanf("%f", &r);
	float area;
	if(r<1){
		return -1;
	}else{
		area = Pi * pow(r, 2);
	}
	
	printf("%f", area);
	return area;
}
void check2(int n){
	printf("Enter n: ");
	scanf("%d", &n);
    if (sqrt(n) == (int)sqrt(n)) {
        printf("%d la so chinh phuong", n);
    } else {
        printf("%d khong la so chinh phuong", n);
    }
}
int check3(char a[]){
	int i, count=0;
	for(i = 0; i<strlen(a);i++){
		if(a[i]==' '){
			count++;
		}
	}
	printf("OUTPUT: \n", a);
	printf("%d", count+1);
	return count+1;
}
void input3(char x[]){
	printf("Enter string: \n");
	fflush(stdin);
	gets(x);	
}
void input4(int x[], int n){
	int i;
	printf("Enter array: ");
	for(i = 0; i< n; i++){
		scanf("%d", &x[i]);
	}		
}
void output4(int x[], int n){
	int i;
	printf("OUTPUT: \n");
	for(i = 0; i< n; i++){
		printf("%d\n", x[i]);
	}		
}
void change4(int x[], int n){
	int i;
	for(i = 0; i<n; i++){
		x[i] = pow(x[i], 2);
	}
}
void choose(int n){
	float r, x, c = 4, b[4];
	char a[100];
	do{
		printf("\n1. B1 \n");
		printf("2. B2 \n");
		printf("3. B3 \n");
		printf("4. B4 \n");
		printf("Enter your chooose: ");
		scanf("%d", &n);
		switch(n){
			case 1:
				check1(r);
				break;
			case 2:
				check2(x);
				break;
			case 3:
				input3(a);
				check3(a);
				break;
			case 4:
				input4(b, c);
				change4(b, c);
				output4(b, c);	
		}
	}while(n>=1 && n<=4);
}
int main() {
	int n;
	choose(n);
}
