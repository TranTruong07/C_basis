#include <stdio.h>
#include <math.h>
void check(int n){
	printf("Enter n: ");
	scanf("%d", &n);
    if (sqrt(n) == (int)sqrt(n)) {
        printf("%d la so chinh phuong", n);
    } else {
        printf("%d khong la so chinh phuong", n);
    }
}
int main() {
	int n;
	check(n);
}
