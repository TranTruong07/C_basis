#include <stdio.h>

int main() {
/*	FILE *p;
	p = fopen("FILE.txt", "w");
	char str[20] = "Hello,sir";
	fprintf(p, "%s", str);
	fclose(p);*/
	char str[50];
	FILE *p1;
	p1 = fopen("FILE.txt", "r");
	while (fgets(str, sizeof(str), p1) != NULL) {
        printf("%s", str);
    }
	//printf("%s", str);
	fclose(p1);
}
