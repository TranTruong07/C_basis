#include <stdio.h>
int main() {
	double x = 3.2, y = 5.1;
	double* p1 = &x;		// *p1 = x = 3.2
	double* p2 = &y;		// *p2 = y = 5.1
	*p1 += 3 - 2*(*p2);		// *p1 = *p1 + 3 - 2*5.1 = 3.2 + 3 - 2*5.1 = -4 = x
	*p2 -= 3 *(*p1);		// *p2 = *p2 - 3 * (*p1) = 5.1 - 3 * (-4) = 17.1 = y
	printf("%lf", x+y);		// x + y = (-4) + 17.1 = 13.1
	getchar();
	return 0;
}
