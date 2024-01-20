#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos1, pos2;
    printf("Nhap vi tri phan tu thu nhat muon hoan doi: ");
    scanf("%d", &pos1);
    printf("Nhap vi tri phan tu thu hai muon hoan doi: ");
    scanf("%d", &pos2);
    if(pos1>=0&&pos2>=0&&pos1<size&&pos2<size&&pos1!=pos2){
    
    printf("Mang truoc khi hoan doi:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    swap(arr, pos1, pos2);
    
    printf("\nMang sau khi hoan doi:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}else{
	printf("Don't swap");
}
    return 0;
}
