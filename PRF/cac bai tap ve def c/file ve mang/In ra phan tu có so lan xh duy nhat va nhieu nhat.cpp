#include <stdio.h>
// duy nhat
//int main() {
//    int n;
//    printf("Nhap so luong phan tu trong mang: ");
//    scanf("%d", &n);
//    
//    int a[n];
//    printf("Nhap cac phan tu trong mang: ");
//    for(int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    
//    printf("Cac phan tu duy nhat trong mang: ");
//    for(int i = 0; i < n; i++) {
//        int pos = 1;
//        for(int j = 0; j < n; j++) {
//            if(i != j && a[i] == a[j]) {
//                pos = 0;
//                break;
//            }
//        }
//        if(pos) {
//            printf("%d ", a[i]);
//        }
//    }
//    return 0;
//}

// nhieu nhat
int main() {
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Nhap cac phan tu trong mang: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max_count = 0, max_value = 0;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(a[j] == a[i]) {
                count++;
            }
        }
        if(count > max_count) {
            max_count = count;
            max_value = a[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la: %d", max_value);
    return 0;
}

