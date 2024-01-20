#include<stdio.h>
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
	int d, m, y;  
	printf("Nhap Ngay, Thang, Nam: \n");
  	scanf("%d%d%d", &d, &m, &y); 
    if(Check(d, m, y)){
    	printf("valid date\n"); 
		printf("ngay %d - Thang %d - Nam %d\n", d, m, y);    	
    }else
    	printf("invalid date");
    return 0;
}
