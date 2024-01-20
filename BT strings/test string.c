#include <stdio.h>
#include <string.h>

#define MAX_LEN 50 // d? dài t?i da c?a tên ngu?i

int main()
{
    char names[5][MAX_LEN]; // khai báo m?ng ch?a 5 tên ngu?i
    char temp[MAX_LEN]; // bi?n t?m d? th?c hi?n s?p x?p
    int i, j;
    // nh?p tên ngu?i t? ngu?i dùng và luu vào m?ng
    printf("Nh?p 5 tên ngu?i:\n");
    for (i = 0; i < 5; i++) {
        printf("Tên ngu?i %d: ", i+1);
        scanf("%s", names[i]);
    }
    
    // s?p x?p tên ngu?i theo th? t? tang d?n
    for (i = 0; i < 4; i++) {
        for (j = i+1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    // in ra m?ng tên ngu?i dã s?p x?p
    printf("\nDanh sách tên ngu?i dã s?p x?p:\n");
    for (i = 0; i < 5; i++) {
        printf("%s", names[i]);
        if (i < 4) {
            printf(" ");
        }
    }
    
    return 0;
}
