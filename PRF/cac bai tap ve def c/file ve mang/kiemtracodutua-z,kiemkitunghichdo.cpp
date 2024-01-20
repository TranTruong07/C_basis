#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<r){
		if(c[l]!=c[r]) return 0;
		++l;
		--r;
	}
	return 1;
}
int pangram(char c[]){
	strlwr(c);
	int cnt[26]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]-'a']=1;
	}
	for(int i=0;i<=26;i++){
		if(cnt[i]==0) return 0;
	}
	return 1;
	
}
int main(){
	char c[1000];
	scanf("%s",c);
	if(check(c)) printf("YES");
	else  printf("NO");
}
