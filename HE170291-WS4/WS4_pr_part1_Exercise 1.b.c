#include <stdio.h>
int main() {
	char c1 = 'A', c2 = 'F';	// A = 65, F = 70;
	char* p1 = &c1;		//*p1 = A = 65
	char* p2 = &c2;		//*p2 = F = 70
	*p1 += 3;		//*p1 = *p1 + 3 = 68 = c1
	*p2 -= 5;		//*p2 = *p2 - 5 = 65 = c2
	printf("%d", c1 - c2); 	//c1 - c2 = 68 - 65 = 3
	return 0;
}
