#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int *arr = (int*)calloc(sizeof(int), n);
// ham realloc (thay doi kich co mang): arr = realloc(arr, x) x: so luong phan tu mang se co
int main() {
	int n;
	scanf("%d", &n);
	int *arr = (int*)malloc(sizeof(int)*n);
	int i;
	for(i = 0; i<n ; i++){
		printf("a[%d] - ", i);
		scanf("%d", arr+i);
	}
	int sum = 0;
	for(i = 0; i<n; i++){
		if(*(arr+i)%2==0){
			sum += pow(*(arr+i), 2);
		}
	}
	printf("%d", sum);
//	for(i = 0; i<n ; i++){
//		printf("%d", *(arr+i));
//	}
	free(arr);
	
}
