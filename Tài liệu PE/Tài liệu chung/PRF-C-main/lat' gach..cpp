#include<stdio.h>
#include<string.h>

int main() {
  int a,b,c,s,m,n;
  scanf("%d%d%d", &a, &b, &c);
  m=a/c; if (a%c!=0) m++;
  n=b/c; if (b%c!=0) n++;
  printf("%d",m*n);
    
    return 0;}
