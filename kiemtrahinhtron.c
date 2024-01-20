#include <stdio.h>
#include <math.h>
int KThinhtron(double a, double b, double c){
	double d2 = a*a + b*b;
	double r2 = c*c;
	if(d2 == r2)
		return 1;
	if(d2 < r2)
		return 0;
	else
		return -1;
}
int main() {
	double x, y, r, d;	
	do{
		printf("Enter radius (cm): \n");
		scanf("%lf", &r);
	}while(r<1);
	printf("Enter x, y (cm): \n");
	scanf("%lf%lf", &x, &y);
	int R = KThinhtron(x, y, r);
	if(R == 1){
		printf("the point is on the circle \n");
	}else if(R == 0){
		printf("the point is in the circle  \n");
	}else
		printf("the point is out of the circle \n");	
}
