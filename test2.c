#include <conio.h>
#include <stdio.h>
int checkso(int a[], int n){
	int i, j, max = 1, count = 1;
	for(i = 0; i< n; i++){
		for(j = i+1; j< n; j++){
			if(a[i]== a[j]){
				count++;
			}
			if(count > max){
				max = count;
				count = 1;
			}
		}
	}
	return max;
}

void timso(int a[], int n){
	int i, j, count = 1;
	for(i = 0; i< n; i++){
		for(j = i+1; j<n; j++){
			if(a[i]==a[j]){
				count++;
				if(count == checkso(a, n)){
					printf("%d", a[i]);
					count = 1;
				}
			}
		}
	}
}
int main() {
	int a[6] = {1, 8, 2, 5, 8, 8};
	checkso(a, 6);
	//printf("%d", checkso(a, 6));
	timso(a, 6);
}
