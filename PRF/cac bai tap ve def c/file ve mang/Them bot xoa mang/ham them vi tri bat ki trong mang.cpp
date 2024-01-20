#include<stdio.h>
#include<math.h>

int themmang(int index, int value, int a[], int size) {
    if (index < 0 || index > size) {
        printf("Vi tri khong hop le");
        return -1;
    }
    for (int i = size ; i >index; i--) {
        a[i] = a[i-1];
    }
    a[index] = value;
    printf("Mang sau khi them o vi tri %d la: ", index);
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

int main() {
    int size;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    int a[size];
    printf("Nhap phan tu trong mang: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int index, value;
    printf("Nhap vi tri can them trong mang: ");
    scanf("%d", &index);
    printf("Nhap gia tri can them trong mang: ");
    scanf("%d", &value);
    int result = themmang(index, value, a, size);
    if (result == -1) {
        return -1;
    }
    return 0;
}
