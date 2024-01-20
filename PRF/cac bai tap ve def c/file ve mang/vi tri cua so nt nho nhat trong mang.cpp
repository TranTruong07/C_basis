#include <stdio.h>
#include <math.h>

int nt(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min_prime = -1;
    int min_prime_index = -1;
    for (int i = 0; i < n; i++) {
        if (nt(a[i])) {
            if (min_prime == -1 || a[i] < min_prime) {
                min_prime = a[i];
                min_prime_index = i;
            }
        }
    }

    if (min_prime_index == -1) {
        printf("Khong tim thay so nguyen to trong mang");
    } else {
        printf("Vi tri cua so nguyen to nho nhat: %d", min_prime_index);
    }

    return 0;
}

