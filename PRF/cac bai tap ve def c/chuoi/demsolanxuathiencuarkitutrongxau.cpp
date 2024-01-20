#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// lan in thuong in hoa
int main(){
    char c[1005];
    gets(c);
    int cnt[256]={0};
    for(int i=0;i<strlen(c);i++){
    	cnt[(int)c[i]]++;
	}
    for(int i=0;i<256;i++){
    	if(cnt[i]!=0)
    	printf("%c\t%d\n",i,cnt[i]);
	}
    
}

