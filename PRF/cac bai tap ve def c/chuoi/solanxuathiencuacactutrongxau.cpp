#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	if(*x<*y) return -1;
	return 1;
}

int main(){
	char c[1000],a[20][50];
	gets(c);
	strlwr(c);
	int n=0;
	char *token=strtok(c, " ");
	while(token!=NULL){
		strcpy(a[n],token); ++n;
		token=strtok(NULL, " ");
			
	}
	int b[n]={0},cnt=1;
	qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;i++){
		while(strcmp(a[i],a[i+1])==0){
			++cnt;
			++i;
		}
		printf("%s %d\n",a[i],cnt);
		cnt=1;
	}
//	for(int i=0;i<n;i++){
//		if(b[i]==0){
//			int cnt=1;
//			for(int j=i+1;j<n;j++){
//				if(strcmp(a[i],a[j])==0){
//					++cnt;
//					b[j]=1;
//				}
//			}
//			printf("%s %d\n",a[i],cnt);
//		}
//	}
	
}
