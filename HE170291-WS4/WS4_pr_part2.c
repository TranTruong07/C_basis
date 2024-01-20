#include <stdio.h>
#include <math.h>
int KTsonguyento(int a){
	int i, c = 0;
	for( i = 2; i <= sqrt(a); i++){
			if(a % i == 0)
				c ++;
	}
	if(c == 0)
		return 1;
	else		
		return 0;						
}

void Checkmaxmin(int a){
	int max, min, remainder;
	int x = a % 10;
	a /= 10;
	max = min = remainder = x;
	while(a>0){
		remainder = a % 10;
		if(remainder>max){
			max = remainder;
		}		
		if(remainder<min){
			min = remainder;
		}		
		a = a / 10;
	}
	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
}

int main() {
	int n, a, b;
	do{
		printf("1- Process primes\n");
		printf("2- Print min, max digit in an integer \n");
		printf("3- Quit\n");
		printf("Select an operation:");
		scanf("%d", &n);
		switch(n) {
			case 1:
				printf("Nhap 1 so de kiem tra so nguyen to: ");
				scanf("%d", &a);
				if(KTsonguyento(a))
					printf("It is a prime\n");
				else
					printf("It is not a prime\n");
				printf("\n");
				break;
			case 2:	
				printf("Nhap 1 so de kiem tra max, min trong 1 so: ");
				scanf("%d", &b);
				Checkmaxmin(b);
				printf("\n");
				break;
		}
		
	}while(n!=3);
	
}
