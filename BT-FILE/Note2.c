#include <stdio.h>
int main() {
	FILE *f;
	f = fopen("Note.txt", "r");
	int n;
	fscanf(f, "%d", &n);
	printf("Gia tri la: %d", n);
	fclose(f);
}
