#include <stdio.h>
#include <conio.h>
int main() {
	int n = 260, *p = &n;  //*p tro den dia chi cua n v� Address *p: 0000000000000104, cost *p : 260
	printf("%p\n", *p);
	printf("n = %d\n", n);
	char* pp = (char*)p;	//Khai bao 1 con tro *pp cho = *p va duoc ep kieu char v� Address *pp: 0000000000000004, cost *p : 260	
	*pp = 0;
	printf("n = %d\n", n);	//*pp cho = 0 va dia chi thay doi Address *pp: 0000000000000000, gia tri thay doi *pp = *p = n v� dang dc ep kieu char cost *p : 256
	getch();
}
