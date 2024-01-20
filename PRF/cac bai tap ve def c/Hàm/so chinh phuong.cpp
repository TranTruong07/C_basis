//liet ke so chinh phuong 
#include<stdio.h>
#include<math.h>
int Square(int a){
	if (a<0)return 0;
 	int b= (int)sqrt(a);
    if(b*b==a)return 1;
     else return 0;
  }

 int main(){
 	int n;
 	printf("enter the number :");scanf("%d",&n);
//    if(Square(n)==1)printf("square");
//    else printf("not square"); 
//    return 0;
    for(int i=0;i<=n;i++)
	    if(Square(i)==1)printf("%d\n",i);
	    return 0;
}

//CHUA BAI
/*
int square(int m){
if(m<0) return 0;
int b =(int)sqrt(m);
double a=sqrt(m);
if(a==b)//if(a-b==0)
return 1;
else 
return 0;

}

