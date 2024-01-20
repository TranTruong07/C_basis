#include <stdio.h>
#define Pi 3.14159
#include <math.h>
float check(float r){
	printf("Enter r: ");
	scanf("%f", &r);
	float area;
	if(r<1){
		return -1;
	}else{
		area = Pi * pow(r, 2);
	}
	
	printf("%f", area);
	return area;
}
int main() {
	float r;
	check(r);
}
