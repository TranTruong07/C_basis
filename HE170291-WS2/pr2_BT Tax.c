#include"stdio.h"
#include"math.h"
int main(){
    float TongThuNhap, tf, ti ; 
    // tf= thu nhap mien thue ; ti = thu nhap chiu thue
    int pa = 9000000;
    int pd = 3600000;
    int  n;
    printf("Tong thu nhap 1 nam la : ");
    scanf("%f", &TongThuNhap );
    printf("Number of dependent :");
    scanf("%d", &n);
    tf = 12*(pa+n*pd);
    printf("\n Tax-free income la : %.2f", tf);
    ti = TongThuNhap - tf;
    if(ti<=0){
        printf("\n taxable income = 0 ");
        printf("\n income tax  = 0"); 
    }else if (ti>0 && ti<= 5000000){
        printf("\nTaxable income = %.2f",ti);
        printf("\nIncome tax = %.2f", ti*5/100);
    } else if (ti>5000000 && ti<=10000000){
        printf("\nTaxable income = %.2f ",ti);
        printf("\nIncome tax = %.2f", 5000000*5/100 + (ti-5000000)*10/100);
    }else if (ti>10000000 && ti<=18000000){
        printf("\n Taxable income = %.2f",ti);
        printf("\nIncome tax = %.2f", 5000000*5/100+5000000*10/100+(ti-10000000)*15/100);
    }else {
        printf("\nTaxable income = %.2f",ti);
        printf("\nIncome tax = %.2f", 5000000*5/100+5000000*10/100+8000000*15/100+(ti-18000000)*20/100);
    }
}
