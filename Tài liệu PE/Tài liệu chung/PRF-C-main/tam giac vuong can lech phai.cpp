#include<stdio.h>
#include<math.h>
int main() {
   int a,b;
   scanf("%d%d", &a, &b); // 2 canh goc vuong
for(int i=1;i<=a;i++)
 {for (int j=0;j<b-i;j++) printf("-");
 for (int j=0;j<i;j++) printf("*");
 printf("\n");
 }
}
