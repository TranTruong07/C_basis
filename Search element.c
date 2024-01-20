#include <stdio.h>
int FirstLinearSearch(int a[], int x, int n){
	int i = 0;
	for(i = 0; i< n; i++){
		if(x==a[i])
		return i;
	}
	return -1;
}
int LastLinearSearch(int a[], int x, int n){
	int i = n-1;
	for(i = n-1; i>=0; i--){
		if(x == a[i]){
			return i;
		}
	}
	return -1;
}
int main() {
	int a[] = {4 , 2, 6, 7, 8, 2, 54, 9}, x = 2;
	int pos1 = FirstLinearSearch(a, x, 8);
	int pos2 = LastLinearSearch(a, x, 8);
	if(pos1 >= 0)
		printf("First existent: %d, Last existent: %d", pos1, pos2);
	else
		printf("%d do not exist", x);
}
