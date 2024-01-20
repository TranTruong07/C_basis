#include <stdio.h>
#include <math.h>
void Fibonacci(){
	int n, i;
	do{
		printf("Nhap n >= 1\n");
		scanf("%d", &n);
	}while(n < 1);
	int f0 = 1, f1 = 1, fn;	
	for(i = 3; i <= n; i++){
		fn = f0 + f1;		
		f0 = f1;
		f1 = fn;
	}
	printf("So Fibonacci thu %d la: %d \n", n, fn);
	printf("\n");
}

int Check(int a , int b, int c) {
  	
  	if(a < 1 || a > 31 || b < 1 || b > 12 || c < 1){
  		return 0;
  	} //(b == 1 && b == 3  5, 7, 8, 10, 12 )
  	switch(b){
  		case 1:
  		case 3:
		case 5:
		case 7:	
		case 8:
		case 10:
		case 12:
			if(a < 1 || a > 31) 
				return 0;
		case 4:
		case 6:
		case 9:
		case 11:
			if(a < 1 || a > 30) 
				return 0;
		case 2:
			if(c % 400 == 0 || c % 4 == 0 && c % 100 != 0){
				if(a < 1 || a > 29) 
				return 0;
			}else
				if(a < 1 || a > 28) 
				return 0;
		default:
			return 1;
  	}
  		
}

int main() {
	int n, d, m, y;  
	do{
		printf("1-Fibonacci sequence\n");
		printf("2-Check a date\n");
		printf("3- Quit\n");
		printf("Select an operation:");
		scanf("%d", &n);
		switch(n) {
			case 1:
				Fibonacci();
				break;
			case 2:	
				printf("Nhap Ngay, Thang, Nam: \n");
  				scanf("%d%d%d", &d, &m, &y); 
				if(Check(d, m, y)){
    			printf("valid date\n"); 
				printf("ngay %d - Thang %d - Nam %d\n", d, m, y);    	
    			}else
    			printf("invalid date\n");
    			printf("\n");
				break;
		}
		
	}while(n!=3);
	
}
