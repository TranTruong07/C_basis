#include <stdio.h>

typedef struct {
    char name[50];
    char address[100];
    float score;
} Student;

int main() {
    FILE *fp;
    Student student;
    int count = 0;
    
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    printf("List of students:\n");
    while (fscanf(fp, "%[^,],%[^,],%f\n", student.name, student.address, &student.score) == 3) {
        printf("Student %d:\n", ++count);
        printf("Name: %s\n", student.name);
        printf("Address: %s\n", student.address);
        printf("Score: %.2f\n", student.score);
    }
    
    fclose(fp);
    
    return 0;
}
