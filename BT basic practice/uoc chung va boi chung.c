#include <stdio.h>
int main() {
	int n = 4, m = 6, T = n*m;
	while(n!=m){
		if(m>n){
			m -= n;
		}else
			n -= m;
	}
	printf("GCD UCLN: %d\n", n);
	printf("LCM BCNN: %d", T/n);
}
