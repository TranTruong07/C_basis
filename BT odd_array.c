#include <stdio.h>
void input(int *a, int n){
	int i; 
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}	
}
void CheckOdd(int a[], int n){
	int i;	
	for(i=0;i<n;i++){
		if(a[i]%2 != 0){
			printf("%d\n", a[i]);	
		}
	}
}
int main() {
	int a[7];
	printf("Nhap mang\n");	
	input(&a, 7);
	CheckOdd(a, 7);
}
