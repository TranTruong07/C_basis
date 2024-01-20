#include <stdio.h>
#include <math.h>
int check(int a, int b, int c){
	if(a+b>c && a+c>b & b+c>a){
		return 1;
	}else
		return -1;
}
int main() {
	int AB, AC, BC;
	printf("Enter AB, AC, BC: ");
	scanf("%d%d%d", &AB, &AC, &BC);	
	if(check(AB, AC, BC)){
		if(pow(AB, 2) + pow(AC, 2) == pow(BC, 2) || pow(AB, 2) + pow(BC, 2) == pow(AC, 2) || pow(BC, 2) + pow(AC, 2) == pow(AB, 2))
			printf("\nla tam giac vuong");
		else
			printf("\nKhong phai la tam giac vuong");		
	}
}
