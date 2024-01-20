
#include<math.h>
#include<stdio.h>
int main()
{
	double pa = 9000000, pd=3600000, income, tf, ti;
	int n;
	printf("Your income of this year: ");
	scanf("%lf", &income);
	printf("Number of dependent: ");
	scanf("%d", &n);
	tf= 12*(pa+n*pd);
	printf("Tax-free income: %.0lf", tf);
	ti=income - tf;
	
	if( ti<=0) printf("\nTaxable income: 0\nIncome tax: 0");
	else if(0<ti && ti<=5000000){
		printf("\nTaxable income: %.0lf", ti);
		printf("\nIncome tax: %.0lf", ti*5/100 );
    }
    else if(5000000<ti && ti<=10000000){
		printf("\nTaxable income: %.0lf", ti);
		printf("\nIncome tax: %.0lf", 5000000*5/100 + (ti-5000000)*10/100 );
    }else if(10000000<ti && ti<=18000000){
		printf("\nTaxable income: %.0lf", ti);
		printf("\nIncome tax: %.0lf", 5000000*5/100 + 5000000*10/100 + (ti-18000000)*15/100);
    }else{
		printf("\nTaxable income: %.0lf", ti);
		printf("\nIncome tax: %.0lf", 5000000*5/100 + 5000000*10/100 + 8000000*15/100 + (ti-18000000)*20/100);
    }

	return 0;
}
















