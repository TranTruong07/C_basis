#include<stdio.h>
int main(){
    char c1 , c2;
    int d;
    char temp;
    char c;
    printf("Enter c1:");
    scanf("%c",&c1);
    fflush(stdin);
    printf("\nEnter c2:");
    scanf("%c",&c2);
    if (c1>c2){
    temp= c1 ; 
    c1 =c2 ; 
    c2 =temp ;
    }
    d= c2 - c1 ;
    printf(" d = %d\n",d);
    for (c=c2 ; c>=c1;c++){
    printf("%c : %6d%6o%6X\n", c, c, c, c);
    }

}
