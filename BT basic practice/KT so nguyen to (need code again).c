/*#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void input(int *a, int *n){
	int i;
	for(i = 0; i<n; i++){
		printf("a[%d] - ", i);
		scanf("%d", &a[i]);
	}
}
bool check(int a){
	if(a<2)
		return false;
	int i;
	for(i = 2; i< a/2; i++){
		if(a%2==0)
		return false;
	}
	return true;
}
void check2(int a[], int n){
	int i, count = 0;
	for(i = 0; i<n; i++){
		if(check(a[i])){
			printf("%d\n", a[i]);
		}
	}
}
int main() {
	int a[100];
	int n;
	printf("How many elemint you want enter your array(1 --> 100): ");
	scanf("%d", &n);
	input(&a, n);
	//check2(a, n);
	int i;
	for (i = 0; i < n; i++) {
        if (check(a[i])) {
            printf("%d ", a[i]);
        }
    }
}
*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
	int i ;
    for (i= 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr[100]; // khai báo m?ng s? nguyên v?i d? dài t?i da là 100
    int n; // s? lu?ng ph?n t? trong m?ng
	int count = 0;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
	int i;
    // Nh?p giá tr? cho t?ng ph?n t? trong m?ng
    for (i = 0; i < n; i++) {
        printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In ra các s? nguyên t? trong m?ng
    printf("Cac so nguyen to trong mang la: ");
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
	printf("%d", count);
    return 0;
}
