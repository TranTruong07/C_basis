#include<stdio.h>
#include<string.h>


int main()
{
int l, count=0,i;
char s[100];
printf("Nhap string: ");
scanf("%[^\n]",s); // nhan string tu ban phim, co nhan ca dau cach
printf("String vua nhap: %s\n",s);
l=strlen(s);
printf("ky tu cuoi la: %c",s[l-1]);
i=0;
while(i<l-1) 
{
if(s[i]==' '&&s[i+1]!=' ') count++;
    i++;
}
count=count+1; // cong them tu (word) dau tien;
printf("So tu trong string la: %d",count); 
}
