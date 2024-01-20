//#include<stdio.h>
//int main() {
//    double a, b;
//    printf("Integer Part = ");
//    scanf("%lf", &a);
//    printf("Fraction Part = ");
//    scanf("%lf", &b);
//
//    while (b > 1) {
//        b = b * 0.1;   
//    } 
//    double fullNumber = a + b;
//    printf("%lf", fullNumber);
//    return 0;
//}


#include<stdio.h>
#include<math.h>

double makeDouble(int ipart, int fraction){
	double d_f=fraction;
	while(d_f>=1) d_f=d_f/10;
	if(ipart<0) return ipart-d_f;
	return ipart+d_f;
}

int main()
{
	double ipart, fraction;
	printf("Integral part: "); scanf("%lf", &ipart);
	do{
		printf("Fraction part: "); scanf("%lf", &fraction);
	}while(fraction<0);
	printf("Fullnumber is: %lf", makeDouble(ipart,fraction));
}












