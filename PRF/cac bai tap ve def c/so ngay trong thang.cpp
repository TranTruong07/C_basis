#include<stdio.h>
// khai bao ham
int main(){
	int thang, nam;
// nhap du lieu 
printf("nam =");
scanf("%d", & nam);
printf("thang :");
scanf("%d, & thang");

// xu ly du lieu
switch(thang){ 
	 case 1: 
	 case 3:
	 case 5: 
	 case 7: 
	 case 8: 
	 case 10: 
	 case 12:
      printf("so ngay trong thang la 31");
      break;
    
     case 4: 
	 case 6:
	 case 9: 
	 case 11: 
	 printf("so ngay trong thang la 30");
	 break;
	
	case 2:
		if ( nam % 400 == 0 || nam % 4 == 0 && nam %100 !=0){
			printf("nam nhuan thang 2 co 29 ngay");}
			else{ printf(" thang co 28 ngay ");
			}
     break;
    
	 default : 
	 printf("nhap du lieu ko dung");
     break;
	
	
	}
	
	}
