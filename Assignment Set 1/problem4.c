#include <stdio.h>

int main() {
	FILE *p;
	p = fopen("FILE.txt", "w");
	char str[20] = "Hello,sir";
	fprintf(p, "%s", str);
	fclose(p);
	FILE *p1;
	p1 = fopen("FILE.txt", "r");
	fscanf(p1, "%s", &str);
	printf("%s", str);
	fclose(p1);
}
