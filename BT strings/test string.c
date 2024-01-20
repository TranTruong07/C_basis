#include <stdio.h>
#include <string.h>

#define MAX_LEN 50 // d? d�i t?i da c?a t�n ngu?i

int main()
{
    char names[5][MAX_LEN]; // khai b�o m?ng ch?a 5 t�n ngu?i
    char temp[MAX_LEN]; // bi?n t?m d? th?c hi?n s?p x?p
    int i, j;
    // nh?p t�n ngu?i t? ngu?i d�ng v� luu v�o m?ng
    printf("Nh?p 5 t�n ngu?i:\n");
    for (i = 0; i < 5; i++) {
        printf("T�n ngu?i %d: ", i+1);
        scanf("%s", names[i]);
    }
    
    // s?p x?p t�n ngu?i theo th? t? tang d?n
    for (i = 0; i < 4; i++) {
        for (j = i+1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    // in ra m?ng t�n ngu?i d� s?p x?p
    printf("\nDanh s�ch t�n ngu?i d� s?p x?p:\n");
    for (i = 0; i < 5; i++) {
        printf("%s", names[i]);
        if (i < 4) {
            printf(" ");
        }
    }
    
    return 0;
}
