#include <stdio.h>

enum state {Menu, Ingame, Setting} state;

void menu(){
	
}
void printfBox() {
	int i, j;
	for(i = 0; i< 30; i++){
		for(j = 0; j< 130; j++){
			if(i == 0 && j >= 4 || i == 29 && j >=4 || j == 4 || j == 129){
				printf("=");
				}else
					printf(" ");
		}
		printf("\n");		
	}
}
void ingame(){
	printfBox();
	state = 3;
}

void setting(){
	
}


int main() {
	state = 1;
	while(1){
		switch(state){
			case Menu:
				break;
			case Ingame:
				ingame();
				break;
			case Setting:
				break;
			}
	}	
	
}
