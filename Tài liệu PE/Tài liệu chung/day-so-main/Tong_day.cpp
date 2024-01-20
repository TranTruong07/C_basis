// tong day khong trung

#include <stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    long a[n], i,j,k,s=0;

	for(i=0; i<n; i++) scanf("%ld",&a[i]);

    s=a[0];
    i=1;
    while(i<n)
    {
        k=1;	
        for(j=0;j<i;j++) 
			if(a[i]==a[j]) {k=0; break;	}
		
		if(k==1) s=s+a[i];
	  i=i+1;
	}
  printf("%ld",s);
}
