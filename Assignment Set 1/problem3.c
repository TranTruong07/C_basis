#include <stdio.h>

int main() {
	int a = 10;
	int *pa = &a;
	printf("\nPrint the value of the integer pointed to by the pointer ");
	printf("\n%d", *pa);
	printf("\n%p", pa);	
	printf("\nIncrement the pointer and print the new value of the integer pointed to by the pointer  ");
	(*pa)++;
	printf("\n%d", *pa);
	printf("\n%d", a);
	printf("\nDecrement the pointer and print the new value of the integer pointed to by the pointer");
	(*pa)--;
	printf("\n%d", *pa);
	printf("\n%d", a);
}
