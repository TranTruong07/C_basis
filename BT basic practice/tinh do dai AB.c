#include <stdio.h>
#include <math.h>
int main() {
	float a = 3.2, b = -1.4, c = -5.7, d = 6.1;
//	printf("Nhap A(x,y): ");
//	scanf("%lf%lf", &a, &b);
//	printf("Nhap B(x,y): ");
//	scanf("%lf%lf", &c, &d);
	float AB;
	AB = sqrt(pow(c-a, 2) + pow(d-b, 2));
	printf("Do dai AB la: %lf", AB);
	
}
