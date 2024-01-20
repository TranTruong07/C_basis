#include <stdio.h>
int t(int x, int y, int z) {
	int k = 2*x + 3*y + 5*z; 	// k = 2*6 + 3*7 + 5*5 = 58
	return k % 13;		// k % 13 = 58 % 13 = 6 ( luc nay 58 / 13 = 4 va du 6
}
int main() {
	int L;
	// a = 7, b = 6, c = 5
	L = t(6, 7, 5);  // khi goi ham t(6, 7, 5) tuc la gia tri cua 6 se trung voi x, 7 trung voi y, 5 trung voi z
	printf("%d", L); 	// L = k % 13 = 6
	
}
