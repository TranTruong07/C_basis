//  3 diem A, B, C tao thanh 1 tam giac 
#include<stdio.h>
#include<math.h>
int main(){
// Goi 3 diem A(xA,yA), B(xB,yB), C(xC,yC)
float xA, yA, xB, yB, xC, yC;
float AB, AC, BC;
float chuvi, dientich, p;
printf("nhap gia tri diem cua xA la");
scanf("%f", & xA);
printf("\n");
printf("nhap gia tri diem cua yA la");
scanf("%f", & yA);

printf("\n");
printf("nhap gia tri diem cua xB la");
scanf("%f", & xB);
printf("\n");
printf("nhap gia tri  diem cua yB la");
scanf("%f", & yB);

printf("nhap gia tri diem cua xC la");
scanf("%f", & xC);
printf("\n");
printf("nhap gia tri diem cua yC la");
scanf("%f", & yC);

 AB =sqrt(pow(xA - xB, 2)+ pow(yA - yB, 2));

 AC =sqrt(pow(xA - xC, 2)+ pow(yA - yC, 2));

 BC =sqrt(pow(xB - xC, 2) + pow(yB - yC, 2));

if(AB + AC > BC && BC > abs(AB - AC)){
	printf(" A, B, C tao voi nhau thanh tam giac");}
	else{ printf(" A, B, C thang hang");
	}
	chuvi = AB + BC + AC;
	
	printf("\n");
	printf("chu vi tam giac la %f", chuvi);
	p = chuvi/2;
	dientich= sqrt(p * ( p-AB) * (p-BC) * (p-AC));
	printf("dien tich la %f", dientich);


}
