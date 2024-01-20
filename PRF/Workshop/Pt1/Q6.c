#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char s[5][20];
    char t[20];
    int i, j;
    int size = 5;
    for (i = 0; i < size; i++) {
      scanf("%s", s[i]);
    }
    for (i = 1; i < size; i++) {
        for (j = 1; j < size; j++) {
            if (strcmp(s[j - 1], s[j]) > 0) {
                strcpy(t, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], t);
            }
        }
    }
    printf("\nOUTPUT:\n");
    for (i = 0; i < size; i++)
        printf("%s ", s[i]);
    return(0);
}

//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	char c[15];
//	gets(c);
//	int l=0;
//	int r=strlen(c);
//    while(r-l>5){
//    	r--;
//    	l++;
//	}
//	for(int i=l;i<r;i++){
//		printf("%c",c[i]);
//}
//}

