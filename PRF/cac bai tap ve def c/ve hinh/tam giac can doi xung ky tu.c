//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include<stdio.h>  
#include<conio.h>  

int main(void)  
{  
    int kytu=65; 
	int n; scanf("%d", &n); 
    int i,j,k,m;     
    for(i=1;i<=n;i++){  
        for(j=n;j>=i;j--)  
            printf(" ");  
        for(k=1;k<=i;k++)  
            printf("%c",kytu++);  
            kytu--;  
        for(m=1;m<i;m++)  
            printf("%c",--kytu);  
        printf("\n");  
        kytu=65;  
    }   
}

