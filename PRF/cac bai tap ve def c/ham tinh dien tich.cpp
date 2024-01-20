#include<stdio.h>
#include<math.h>
double pi=3.14;
//double getPerimCricle(double r){
//	if (r<0)return 0;
//	double P = 2*r*pi;
//	return P;
//}
//int main(){
//	
//	double n; printf("enter the number :");scanf("%lf",&n);
//	printf("primecricle =%.2lf",getPerimCricle(n));
//}


//double getAreaCircle(double r){
//	if(r<0)return 0;
//	double S=pi*r*r;
//	return S;
//}
//int main(){
//	int r;
//	printf("enter the number:");scanf("%d",&r);
//	printf("S=%.2lf",getAreaCircle(r));
//}

//double getPerimRetangle(double a, double b){
//	if( a <=0 ||b<=0)return 0;
//	double P= 2*(a+b);
//	return P;
//}
//int main(){
//	double a,b;
//	printf("Enter the number:");scanf("%lf %lf",&a,&b);
//	printf("P=%.2lf",getPerimRetangle(a,b));
//}

//double getAreaRectangle(double a, double b){
//	if( a <=0 ||b<=0)return 0;
//	double S= a*b;
//	return S;
//}
//int main(){
//	double a,b;
//	printf("enter the number:");scanf("%lf %lf",&a,&b);
//	printf("S=%.2lf",getAreaRectangle(a,b));
//}


//double getPerimTriangle(double a, double b, double c){
//	if(a<=0||b<=0||c<=0)return 0;
//	if(a== b+c||b== a+c||c ==a+b)return 0;
//	double P=a+b+c;
//	return P;
//}
//int main(){
//	double a,b,c;
//	printf("enter the number:");scanf("%lf %lf %lf",&a,&b,&c);
//	printf("P=%.2lf",getPerimTriangle(a,b,c));
//}
double getAreaTriangle(double a, double b, double c){
	if(a<=0||b<=0||c<=0)return 0;
	if(a== b+c||b== a+c||c ==a+b)return 0;
	double p=(a+b+c)/2;
	double S= sqrt(p*(p-a)*(p-b)*(p-c));
	return S;
}
int main(){
	double a,b,c;
	printf("enter the number");scanf("%lf %lf %lf",&a,&b,&c);
	printf("S=%.2lf",getAreaTriangle(a,b,c));
}


