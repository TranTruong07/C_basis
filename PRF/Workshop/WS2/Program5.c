
#include<ctype.h>
#include<stdio.h>
int main()
{
	printf("Enter character: ");
	int nVowels = 0, nConsonants = 0, nOthers = 0;
	char ch;
	do{
		fflush(stdin);
		ch = getchar();
		ch = toupper(ch);
		if(ch>='A' && ch<='Z'){
			switch(ch){
				case 'A':
				case 'U':
				case 'E':
				case 'O':
			    case 'I':
				    nVowels++;
			    break;
			    default: 
			    nConsonants++;
			}
		}
		else nOthers++;
	}while(ch != '\n');
	printf("\nNumber of Vowels: %d", nVowels );
	printf("\nNumber of Consonants: %d", nConsonants);
	printf("\nNumber of Others: %d", nOthers);
	return 0;
}













