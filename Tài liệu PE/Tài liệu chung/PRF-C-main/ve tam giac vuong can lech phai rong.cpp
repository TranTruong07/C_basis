#include<stdio.h>
#include<math.h>
int main() {
  int n,i,a,b,k;
  scanf("%d", &n);
	for (i=1;i<=n-1;i++) printf("-");
	printf("*\n");
	for (i=1;i<=n-2;i++) printf("-");	printf("**\n");
	
	k=1;
	while (k<=n-3)
	{a=n-2-k;
		for (i=1;i<=a;i++) printf("-");
	printf("*");
	b=k;
		for (i=1;i<=b;i++) printf("-");
	printf("*\n");
	k++;
}for (i=1;i<=n;i++) printf("*");
	}
