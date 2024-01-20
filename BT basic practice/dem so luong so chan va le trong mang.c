#include <stdio.h>
int main() {
	int a[5] = {5, 9, 2, 8, 1};
	int i, count1 = 0, count2 = 0;
	for(i = 0; i< 5; i++){
		if(a[i]%2==0){
			count1++;
		}else{
			count2++;
		}
	}
	printf("%d\n%d", count1, count2);
}
