////// tuoi 
////#include<stdio.h>
////int main(){
////	short age;
////	printf("enter your age:");scanf("%hd", &age);
////	if(age < 0){
////		printf("There is no negative age, exitl");
////		}
////	else if(age<=12){
////		printf("\nYou are a child");
////	
////	}
////	else if(age<=19)
////	printf("\nYou are teenager");
////	else if(age <60)
////	printf("\nYou are adult");
////	else if(age <200)
////	printf("\nYou are old person");
////	else
////	printf("\nYou arre a alien!");
////
////	return(0);}
//
//
//
////Xep hang 
//#include<stdio.h>
//int main(){
//	float math, physics, chemical;
//	
//	printf("enter the math marks : ");scanf("%f",&math);
//	printf("enter the physics marks : ");scanf("%f",&physics);
//	printf("enter the chemical marks: ");scanf("%f", &chemical);
// float avg = (math + physics + chemical)/3;	
//	if(math<0 || physics <0 || chemical <0||math>10|| physics >10|| chemical>10)
//	printf("Errol");
//	
//	
//	else if(avg<5.0)
//	printf("%.2f,poor!",avg);
//	else if(avg <7.0)
//	printf("%.2f,good",avg);
//	else if("avg <8.0")
//	printf("%.2f,very good",avg);
//	else
//	printf("%.2f,excellence",avg);
//
//	return(0);
//}


//phuong trinh bac 2 ax^2+bx+c= 0
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2;
	printf("enter a:");scanf("%f",&a);
	printf("enter b:");scanf("%f",&b);
	printf("enter c:");scanf("%f",&c);
	float delta = (b*b) - (4*a*c);
	if(a==0) printf("false, exsist");
	else{
	 if(delta<0)
	  printf("no equation");
	else if(delta == 0)
	  printf("x1 = x2 = -b/2a = %f",-b/(2*a));
	else
	x1= (-b + sqrt(delta))/(2*a);
	x2= (-b-sqrt(delta))/(2*a);
	printf("x1, x2 :%.2f%.2f",x1, x2);
	}
	return(0);
}
