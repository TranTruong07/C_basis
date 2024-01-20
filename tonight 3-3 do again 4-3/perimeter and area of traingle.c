

// perimeter: chu vi  			area: dien tich
#include <stdio.h>
#include <math.h>
int checktraingle(int a, int b, int c){
	if(a+b>c && a+c>b && b+c>a){
		return 1;
	}else
		return -1;
}
int main() {
	int a, b, c, P;
	float S;
	printf("Enter a ,b, c: ");
	scanf("%d%d%d", &a, &b, &c);	
	if(checktraingle(a, b, c)==1){
		P = a + b + c;
		printf("\nthe Perimeter of this traingle is: %d", P);
		S = sqrt(P*(P-a)+P*(P-b)+P*(P-c));
		printf("\nthe area of this traingle is: %.4lf", S);
	}else
		printf("\nThis is not trainble");
}
