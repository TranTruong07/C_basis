#include <stdio.h>
#include <math.h>
#define Pi 3.141593
// dien tich hinh cau: 4*Pi* pow(r, 2)
int main() {
	int r = 5;
//	float S, V;
//	S = 4*Pi* pow(r, 2);
//	printf("dien tich hinh cau: %.2lf\n", S);
//	V = (float)4/3 * pow(r, 3)*Pi;
//	printf("the tich hinh cau: %.2lf", V);
	
	float R, a = 4*Pi, V;
	float S = 256.128;
	R = sqrt(S/a);
	V = S*R* (float)1/3;
	printf("the tich hinh cau: %.4lf", V);
}
