#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void them(char a[][50], int *n,int pos,char value[]){
	for(int i=*n;i>=pos;i--){
		strcpy(a[i],a[i-1]);
	}
	strcpy(a[pos],value);
	++*n;
}
void xoa(char a[][50],int *n,int pos){
	for(int i=pos;i<*n;i++){
		strcpy(a[i],a[i+1]);
	}
	--*n;
}
int main(){
	char c[1000];
 	gets(c);
 	char a[20][50];
 	int n=0;
 	char *token=strtok(c, " ");
 	while(token!=NULL){
 	    strcpy(a[n],token); ++n;
 		token=strtok(NULL, " ");
	 }
    int pos;
    //char value[100];
    scanf("%d",&pos);
    getchar();
   // gets(value);
    //them(a,&n,pos,value);
    xoa(a,&n,pos);
    for(int i=0;i<n;i++){
    	printf("%s ",a[i]);
	}
	 
}
