#include <stdio.h>
int main() {
	float weight, BMI; 
	float height;
	printf("Enter weight, pls: ");
	scanf("%f", &weight);
	printf("Enter height, pls: ");
	scanf("%f", &height);
	BMI = weight/(height * height);
	printf("%f", BMI);
	if(BMI <16 && BMI > 0){
		printf("Gay do III!\n");
	}else if(BMI>= 16 && BMI < 17){
		printf("Gay do II!\n");
	}else if(BMI >= 17 && BMI < 18.5){
		printf("Gay do I!\n");
	}else if(BMI >= 18.5 && BMI>25){
		printf("Binh thuong\n");
	}else if(BMI >= 25 && BMI < 30){
		printf("Thua can!\n");
	}else if(BMI >= 30 && BMI < 35){
		printf("Beo phi do I!\n");
	}else if(BMI >= 35 && BMI < 40){
		printf("Beo phi do II!\n");
	}else if(BMI >= 40){
		printf("Beo phi do III!\n");
	}
}
