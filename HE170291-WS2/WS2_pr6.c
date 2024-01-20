#include<stdio.h>
int main(){
    int i;
    for(i=0; i<256; i++){
        printf("%c : %3d, %3o, %3X\n", i, i, i, i);
        if (i !=0 && i %20==0)
            break;
	}
}
