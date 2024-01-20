#include <stdio.h>
//void intput(int *a, int n){
//	int i;
//	printf("Enter element: \n");
///	for(i = 0; i< n; i++){
//		scanf("%d", &a[i]);
//	}
//}

int main() {
	int a[5], n;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	input(&a, n);
	
}
