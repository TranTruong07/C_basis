#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char address[50];
    int score;
};
int main() {
    struct Student students[2];
    FILE *fp;
    int i;

    if (fp == NULL) {
    printf("File not found. Creating new file...\n");
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }   
    }

    for (i = 0; i < 2; i++) {
        fscanf(fp, "%s %s %d", students[i].name, students[i].address, &students[i].score);
    }

    fclose(fp);

    
    return 0;
}
