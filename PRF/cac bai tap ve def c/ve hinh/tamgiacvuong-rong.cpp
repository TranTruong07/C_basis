#include<stdio.h>
int tamgiacvuong1(int n){
	int i,j;
	for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        { 
            if(j==1 || j==i || i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

int tamgiacvuong2(int n){
	int i,j;
	   for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            if(i==n || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int tamgiacvuong3(int n){
	int i,j;
	 for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            if(i==1 || j==i || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int tamgiacvuong4(int n){
	int i,j;
	for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)
        {
            if(j==i || j==n || i==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
	int n;
	scanf("%d",&n);
     tamgiacvuong1(n);
     printf("\n");
     tamgiacvuong2(n);
      printf("\n");
     tamgiacvuong3(n);
      printf("\n");
     tamgiacvuong4(n);
}
