#include <stdio.h>
#include <conio.h>
int main() {
	char S[11] = "Hello";
	int choose;
	do{
		printf("1- Thu nghiem 1\n");
		printf("2- Thu nghiem 2\n");
		printf("3- Thu nghiem 3\n");
		printf("4- Thu nghiem 4\n");
		printf("Enter your selection: \n");
		scanf("%d", &choose);
		switch(choose){
			case 1:
				printf(S);
				break;
			case 2:
				printf("%s", S);
				break;
			case 3:
				printf("%s\n", S);
				break;
			case 4:
				puts(S);
				break;
			default:
				break;		
		}
	}while(choose >= 1 && choose <=4);
	getch();
	return 0;
}
