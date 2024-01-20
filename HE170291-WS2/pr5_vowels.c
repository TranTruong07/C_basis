#include <stdio.h>
#include <ctype.h>

int main() {
	printf("Nhap ky tu: ");
	int nVowels = 0;
	int nConsonants = 0;
	int nOthers = 0;
	char ch;	
	do {
		fflush(stdin);		
 		ch= getchar(); 	
		ch= toupper(ch);	
		if( ch>='A' && ch <='Z'){
		
     		switch (ch) {
         	case 'A' :
         	case 'E' :
         	case 'I' :
         	case 'O' :
         	case 'U' : 
		 		nVowels ++; 
				break;				 
         	default:  
		 		nConsonants++;
			}	
		}else{
			nOthers ++;						
		}
    }while(ch != '\n');
	printf("number of vowels: %d\n",nVowels);
	printf("number of consonants: %d\n",nConsonants);
	printf("number of others: %d\n",nOthers);
}

