#include <stdio.h>
void checkperfectnumber(int n){
	int i, sum = 0;
	for(i = 1; i<=n/2; i++){
		if(n%i == 0){
			sum += i;	
		}
	}
	if(sum == n){
		//printf("perfect number");
		printf("%d\n", n);
	}//else{
	//	printf("Not perfect number");
	//}
}
int main() {
	int n = 1000;
	int i;
	for(i = 1;i<n; i++){
		checkperfectnumber(i);
	}
}
