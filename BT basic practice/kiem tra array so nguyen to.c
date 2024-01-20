#include <stdio.h>
#include <stdbool.h>
bool KT(int a){
	int i;
	if(a<2){
		return false;
	}
	for(i = 2; i<=a/2; i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int a[100] = {2, 3, 4, 7, 8}, n = 5;
	int i;
	for(i = 0; i<n; i++){
		if(KT(a[i])){
			printf("%d\t", a[i]);
		}
	}
}
