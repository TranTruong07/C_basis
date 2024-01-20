#include <stdio.h>

int main() {
	int n[5] = {1, 2, 3, 4, 5};
	int max = n[0];
	int i = 1;
	for (i = 1; i< 5; i++){
		if(max < n[i]){
			max = n[i];
		}	
	}
	printf("%d", max);
}
