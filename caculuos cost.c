#include <stdio.h>

int main(){
	
	int quantity;
	double cost, total, tax;
	
	printf("Enter the number of apples desired: "); 
	scanf("%d", &quantity);
	printf("Now enter the cost of one apple (in $): ");
	scanf("%lf", &cost);
	
	total = quantity * cost; tax = 0.15 * total;
	
	printf("That will cost ($%.2lf plus $%.2lf tax): $%.2lf\n", total, tax, total + tax);
}
