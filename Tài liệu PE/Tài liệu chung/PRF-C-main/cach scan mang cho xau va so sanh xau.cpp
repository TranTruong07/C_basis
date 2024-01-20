#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {

int check,j,i,n=2;
char a[n][30],t[30];
for(i=0; i<n; i++)
gets(a[i]);


for(i=0; i<n-1; i++)
	for(j=i+1; j<n; j++)
	{
		check=strcmp(a[i],a[j]);
		if(check>0) 
		{
			strcpy(t,a[i]);
			strcpy(a[i],a[j]);
			strcpy(a[j],t);
		}
	}

for(i=0; i<n; i++)
printf("%s ",a[i]);

  return(0);
}

