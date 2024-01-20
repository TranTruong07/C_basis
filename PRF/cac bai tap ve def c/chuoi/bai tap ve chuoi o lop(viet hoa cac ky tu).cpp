////reverse word in string and cach cac tu 
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	char a[100][40];
//	prin
//	gets(a);
//	
//	
//}

//#include <stdio.h>
//#include <string.h>
///**
// * ham tinh do dai cua chuoi
// */
//int string_length(char s[]) {
//   int i=0;
//   while(s[i]!='\0')
//      i++;
//   return i;    
//} 
///**
// * ham dao nguoc chuoi
// */
//void string_reverse(char str[]) {
//   int i, j, len;
//   char ch;
//
//   j = len = string_length(str) - 1;
//   i = 0;
// 
//   while(i < j) {
//      ch = str[j];
//      str[j] = str[i];
//      str[i] = ch;
//      i++;
//      j--;
//   }
//}
// 
///**
// * ham main
// */
//int main (void) {
//   char s1[] = "Toi Yeu Lap Trinh";
//   char reverse[100] = "";
//   char temp[50];
//   int i, j, n;
//   n = string_length(s1);
// 
//   for(i = n-1; i >= 0; --i) {
// 
//      for(j = 0; i >= 0 && s1[i] != ' '; --i,++j)
//         temp[j] = s1[i];
// 
//      temp[j] = '\0';
// 
//      string_reverse(temp);
//       
//      strcat(reverse, temp);
//      strcat(reverse, " ");
//   }
//   printf("Chuoi ban dau:\n %s", s1);
//   printf("\nChuoi sau khi da duoc dao nguoc:\n %s",reverse);
// 
//   return 0;
//}
//viet hoa cach tu 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ReverseArrS(char ArrS[][40], int size){
int i;
	for(i=0;i<size/2;i++){
		char temp[40];
		strcpy(temp, ArrS[i]);
		strcpy(ArrS[i],ArrS[size-i-1]);
		strcpy(ArrS[size-i-1],temp);
	}
}

int SplitS2Arr(char s[], char ArrS[][40]){
	int i, len=strlen(s), wCount=0;
	for(i=len-1;i>=0;i--)
    	if(s[i]==' ' && s[i-1]!=' '){
    		//ArrS[wCount++] = &s[i+1]
    		strcpy(ArrS[wCount++], &s[i+1]);
    		s[i]=0; //='\0'
		}
    if(strlen(s)>0) strcpy(ArrS[wCount++],s);
    ReverseArrS(ArrS,wCount);
return wCount;
}
int main() {
    char s[200], ArrS[100][40];
    int i, len, wCount=0;
    printf("\nEnter a string: "); scanf("%[^\n]",&s);
    len = strlen(s);
    wCount=SplitS2Arr(s,ArrS);
	int l=0,sh=0;
	for(i=0; i <wCount;i++){
		if(i%2==0) strupr(ArrS[i]);
		else strlwr(ArrS[i]);
		if (strlen(ArrS[i])>=strlen(ArrS[l])) l=i;
		if (strlen(ArrS[i])<=strlen(ArrS[sh])) sh=i;
		printf("%s ",ArrS[i]);
	}
	}
