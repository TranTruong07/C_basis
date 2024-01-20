#include <stdio.h>
#define MAXR 20
#define MAXC 20
void input(int m[][MAXC], int r, int c){
	int i, j;
	for(i = 0; i<r; i++){
		for(j = 0; j<c; j++){
			printf("\nm[%d][%d] = ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
}
void output(int m[][MAXC], int r, int c){
	int i, j;
	for(i = 0; i<r; i++){
		for(j = 0; j<c; j++){
			printf("%7d", m[i][j]);			
		}
		printf("\n");
	}
}

int max(int m[][MAXC], int r, int c){
	int result = m[0][0];
	int i, j;
	for(i = 0; i<r; i++){
		for(j = 0; j<c; j++){
			if(m[i][j]>result)
				result = m[i][j];
		}
	}
	return result;	
}

int main() {
	int m[MAXR][MAXC];
	int r, c;
	int maxvalue;
	do{
		printf("Enter number of row and columns of the matrix: ");
		scanf("%d%d", &r, &c);		
	}while(r<1 || r > MAXR || c < 1 || c > MAXC);
	input(m,r,c);
	output(m,r,c);
	printf("MAX of matrix: %d", max(m,r,c));	
}
