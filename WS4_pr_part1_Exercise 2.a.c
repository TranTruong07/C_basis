#include <stdio.h>
int main() {
	int n = 7, m = 8;
	int* p1 = &n;		// *p1 = n = 7
	int* p2 = &m;		// *p2 = m = 8
	*p1 += 12 - m + (*p2);	//*p1 = *p1 + 12 - m + (*p2) = 7 + 12 - 8 + 8 = 19 = n
	*p2 = m + n - 2*(*p1);	//*p2 = 8 + 19 - 2 * 19 = -11 = m
	printf("%d", m+n);	// m + n = (-11) + 19 = 8;
}
