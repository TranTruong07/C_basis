#include<stdio.h>
// khai bao ham
int main(){
	int thang, nam;
// nhap du lieu 
printf("nhap so thang la :");
scanf("%d", & thang);
printf("nhap so nam la :");
scanf("%d", & nam);
// giai quyet du lieu

switch(thang){
	case 1:
	case 3:
	case 5: 
	case 7: 
	case 8: 
	case 10:
	case 12: 
	printf("co 31 ngay");
	break; 
	
	case 4:
	case 6: 
	case 9: 
	case 11:
	printf("co 30 ngay");
	break;
	
	case 2: 
	if( nam % 400 == 0 || nam % 4 == 0 && nam % 100 !=0){
	printf("so ngay la 29");
	}else{printf(" so ngay la 28");
	}
	break;
	
	default: 
	printf("nhap du lieu sai");
	break;
	}
		
}
	
	
	
	

