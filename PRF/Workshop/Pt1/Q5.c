#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int doixung(int a[], int n){
	for(int i=0; i<=n/2; i++)
	    if(a[i] != a[n-1-i])
	        return 0;
	return 1;        
}

int main() {
	int n;
	do{	    
		scanf("%d", &n);		
	    int a[n];
	    for(int i=0; i<n; i++) scanf("%d", &a[i]);
        printf("\nOUTPUT:\n");
        	if(doixung(a,n)) printf("1");
        	else printf("0");		
	}while(n>20);
    return(0);
}



