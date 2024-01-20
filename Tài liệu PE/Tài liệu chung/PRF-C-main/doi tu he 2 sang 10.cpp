#include <stdio.h>
#include <string.h>
    int main(){
    long long n1,n2,t,hs;
    scanf("%lld", &n1);
    hs=1;
    n2=0;
    while(n1!=0){
    	t=n1%10;
    	n2=n2+t*hs;
    	hs=hs*2;
    	n1=n1/10;}
    	 printf("%lld", n2);
   }

