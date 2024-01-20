#include <stdio.h>
void printSortedArray(int arr[], int n) {
	int i, j;
    int *sorted = malloc(n * sizeof(int)); // t?o m?t m?ng sorted m?i v?i các ph?n t? c?a m?ng arr
    for (i = 0; i < n; i++) {
        sorted[i] = arr[i];
    }

    // s?p x?p m?ng sorted theo th? t? tang d?n
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (sorted[i] > sorted[j]) {
                int temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    // in ra các ph?n t? c?a m?ng arr theo th? t? tang d?n
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[j] == sorted[i]) {
                printf("%d ", arr[j]);
                break;
            }
        }
    }

    free(sorted);
}
int main() {
	int a[5] = {1, 5, 4, 2, 0};
	printSortedArray(a, 5);
	int i;
	for(i = 0; i< 5; i++){
		printf("%d", a[i]);
	}
}
