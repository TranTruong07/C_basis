#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
bool check(int a){
	int i;
	if(a < 2){
		return false;
	}else{
		for(i = 2; i<=a/2; i++){
			if(a%i==0)
				return false;
		}
	}
	return true;
}
int main() {
	int a[5] = {1, 4, 6, 8, 9}, i;
	int count = 0;
	for(i = 0; i< 5; i++){
		if(check(a[i])){
			printf("%d", i);
			count++;
			break;
		}
	}
	if(count == 0){
		printf("-1");
	}
    return 0;
}
