#include <stdio.h>
void input(int mata[][100], int matb[][100], int m, int n, int p){
	int i, j;
	printf("Enter matrix mata: \n");
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			scanf("%d", &mata[i][j]);
		}
	}
	printf("Enter matrix matb: \n");
	for(i = 0; i<n; i++){
		for(j = 0; j<p; j++){
			scanf("%d", &matb[i][j]);
		}
	}
}
void ProductOfTwoMatrices(int mata[][100], int matb[][100], int matc[][100], int m, int n, int p){
	int i, j, sum, k;
	for(i = 0; i<m; i++){
		for(j = 0; j<p; j++){
			sum = 0;
			for(k = 0; k<n; k++){
				sum += mata[i][k] * matb[k][j];
			}
			matc[i][j] = sum;
		}
	}
	printf("OUTPUT Matrix matc: \n");
	for(i = 0; i<m; i++){
		for(j = 0; j<p; j++){
			printf("%d\t", matc[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int mata[100][100], matb[100][100], matc[100][100];
	int m, n, p;
	printf("Enter m, n, p: ");
	scanf("%d%d%d", &m, &n, &p);
	input(mata, matb, m, n, p);
	ProductOfTwoMatrices(mata, matb, matc, m, n, p);
}
