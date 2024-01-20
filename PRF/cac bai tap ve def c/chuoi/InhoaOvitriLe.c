#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	char a[100],x,y;
	gets(a);
	int n=strlen(a);
	for(int i=0; i<n; i++){
		if(i%2==0)
		    a[i]=toupper(a[i]);
	}
	printf("%s", a);
	return 0;
}



