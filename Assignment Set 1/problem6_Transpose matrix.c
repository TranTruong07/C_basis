#include <stdio.h>
int main() {
	int a[100][100];
	int m, n;
	printf("\nNhap hang va cot: ");
	scanf("%d%d", &m, &n);
	nhap(a, m, n);
	xuat(a, m, n);
	Transpose(a, m, n);
}
void Transpose(int a[][100], int m, int n){
	int trans[n][m];
	int i, j;
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			trans[i][j] = a[j][i];
		}	
	}
	printf("Transpose matrix: \n");
	for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
}
void nhap(int a[][100], int m, int n){
	int i, j;
	printf("Nhap:\n");
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			printf("a[%d][%d]", i, j);
			scanf("%d", &a[i][j]);
		}	
	}
}
void xuat(int a[][100], int m, int n){
	int i, j;
	printf("Xuat mang:\n");
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");	
	}
}
