#include <stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 5, b = 6;
	printf("%d - %d\n", a, b);
	swap(&a, &b);
	printf("%d - %d", a, b);
}
