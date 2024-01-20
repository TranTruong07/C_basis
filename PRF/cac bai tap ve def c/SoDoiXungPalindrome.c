//So doi xung(Palindrome)
#include <stdio.h>

int isSymmetric(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int n;
    printf("Nhap vao mot so: ");
    scanf("%d", &n);
    if (isSymmetric(n))
        printf("%d la so doi xung", n);
    else
        printf("%d khong la so doi xung", n);
    return 0;
}











