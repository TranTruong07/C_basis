#include <stdio.h>
void T(int *p, int *q){// o day ham khai bao bien con tro và biên này tro toi vi tri dia chi bien a va b
	int t = *p;		// t = *p = &a = 7
	*p = *q;		// *p = *q = &b = 6
	*q = t;			// *q = t = 7
}					// sau khi hoan doi giua 2 biên thi khi giai phong bien a se nhan gia tri bien b và nguoc lai vi o day da su dung con tro 
int main(){		// tuc la sau khi ham T() chay xong thi gia tri bien o ham main cung thay doi
	int a = 7, b = 6;   // a = 7, b = 6
	T(&a, &b);		//khi goi ham thi gia tri cua 2 bien se dc hoan doi a = 6, b = 7
	printf("%d - %d", a, b);
}
