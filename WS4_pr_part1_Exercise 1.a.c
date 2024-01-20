#include <stdio.h>
int main() {
	int n = 7, m = 6;
	int* pn = &n;       // *pn = n = 7
	int* pm = &m;		// *pm = m = 6
	*pn = *pm + 2*m - 3*n;	// *pn = 6 + 2x6 - 3x7 ==> *pn = -3, n = -3
	*pm -= *pn;		// *pm = *pm - *pn = 6 - (-3) ==> *pm = 9, m = 9
	printf("%d", m+n);		// m + n = 9 + (-3) = 6
	getchar();
	return 0;
}
