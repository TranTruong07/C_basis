#include <stdio.h>
#include <math.h>

void KTsonguyento(int a){
	int i, j, c = 0;
	while(a>2){
		for( i = 2; i <= sqrt(a); i++){
			if(a % i == 0)
				
				c++;			
		}
		if(c==0)
			printf("%d ", a);
		a--;
		c = 0;
	}
}


int main() {
	int n;
	do{
		printf("Nhap so n, (n>2): ");
		scanf("%d", &n);
	}while(n<=2);
	printf("cac so nguyen to tu 2 den %d la:\n", n);
	KTsonguyento(n);
}
