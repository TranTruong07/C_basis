#include <stdio.h>
void sort(float a[]){
	int i, j;
	for(i = 0; i<5; i++){
		for(j = i+1; j<5; j++){
			if(a[i]<a[j]){
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
	}
}
int main(){
	float a[5];
	int i;
	for(i = 0; i< 5; i++){
		scanf("%f", &a[i]);
	}
	sort(a);
	for(i = 0; i< 5; i++){
		printf("%f ", a[i]);
	}
}
