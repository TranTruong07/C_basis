#include <stdio.h>
#include <math.h>
int checksquare(int a){
	if(sqrt(a)*sqrt(a)==a){
		return 1;
	}
	return 0;
}
int main() {
	int n[5] = {1, 4, 5, 16, 12};
	int i;
	for(i = 0; i<5; i++){
		if(checksquare(n[i])){
		printf("good\n");
	}else
		printf("Not good");
	}
}
