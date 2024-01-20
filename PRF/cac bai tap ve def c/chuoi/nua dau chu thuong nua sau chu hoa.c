////String Array of character
//#include<stdio.h>
//#include<ctype.h>
//#include<stdlib.h>
//#include<string.h>
////int main(){
////	char str[]={'h','e','l','l','o','\0','w','o','r','l','d'};
////	int i;
////	//mang
////	for(i=0;i<12;i++)printf("%c",str[i]);
////	//chuoi
////	printf("\n%s",str);
////	return 0;
////}
//int main(){
//	char s[300];
//	printf("\nEnter a string: ");
////	scanf("%[^\n]",&s);//gets(s);
////	strupr(s);
////	strcat(s,"hahahaha");
////	printf("\nThe string input: %s=%d",s,strlen(s));
//int n=strcmp("abc","abb hello world");
//printf("\n%d",n);
//}

//chuoi ky tu in 1 nua dau chu thuong, 1 nua chu hoa
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int main(){
	char c[1000];char n,m;
	printf("enter the string :");
	gets(c);
    int a= strlen(c);
	for(int i=0;i<floor(a/2);i++){
	    c[i]= toupper(c[i]);	
	}
	for(int i=floor(a/2);i<a;i++){
		 c[i]= tolower(c[i]);
	}
    printf("%s", c);
	return 0;	
}
