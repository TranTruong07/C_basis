#include <stdio.h>
int main() {
	int rows, i, j, k;
	char ch;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	for (i = 1; i <= rows; i++) {
		ch = 'A';
		for (j = 1; j <= i; j++) {
			printf("%c", ch);
			ch++;
		}
		ch -= 2;
		for (j = 1; j <= i-1; j++) {
			printf("%c", ch);
			ch--;
		}
		printf("\n");
	}
	return 0;
}
