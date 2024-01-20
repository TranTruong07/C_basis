#include<stdio.h>
#include<math.h>	
int main(){
	double num1, num2;
	char op;
	double result;
	printf("Enter an expression: ");
	scanf("%lf %c %lf",&num1,&op,&num2);
	switch(op){
		case '+':
			result=num1+num2;
			printf("Result: %0.0lf",result);
			break;
		case '-':
			result=num1-num2;
			printf("Result: %0.0lf",result);
			break;
		case '*':
			result=num1*num2;
			printf("Result: %0.0lf",result);
			break;
		case '/':
			if(num2==0) printf("Divide by 0");
			else{
				result=num1/num2;
				printf("Result: %0.2lf",result);
			}
			break;	
		default:
		printf("Op is not supported"); 			
	}
	return 0;
}
