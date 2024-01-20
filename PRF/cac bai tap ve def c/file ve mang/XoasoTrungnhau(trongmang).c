//Xoa so trung nhau co trong mang 
#include <stdio.h>
int main() {
    int arr[100];
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) 
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else  j++;
        }
    printf("Mang sau khi xoa phan tu trung nhau:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
