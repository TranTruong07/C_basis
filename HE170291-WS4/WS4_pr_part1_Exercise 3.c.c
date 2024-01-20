#include <stdio.h>
int T(int *p, int *q){		// khi khai bao ham co kieu con tro *p, *q cac bien nay se tro toi dia chi cua bien khi dc goi ham *p = 3, *q = 4
	int t = *p + *q > 12 ?5:6;	// t = 3 + 4 tinh tong gia tri cua 2 con tro if t > 12 --> 5 else --> 6 vay 7 < 12 ==> false ==> t = 6
	return 2*t%5; 		// 2 * 6 % 5 = 12 % 5 = 2
}
int main(){
	int a = 3, b = 4, c;   
	c = T(&a, &b);	// 2 * t % 5 = 2	
	printf("%d", c);  //  c = 2
}
