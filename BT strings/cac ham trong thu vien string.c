/*
Thu vien string.h trong C
Các hàm trong thu vien string.h
Hàm strlen 
Hàm strcmp – hàm so sánh 2 chuoi
Hàm strcat – hàm noi 2 chuoi
Hàm strcpy – hàm copy chuoi
Hàm strlwr – Ðua chuoi ve dang lowercase
Hàm strupr – dua chuoi ve dang uppercase
Hàm strrev – hàm dao nguoc chuoi
Hàm strchr – Tra ve vi trí dau tiên cua ký tu can tìm
Hàm strstr – hàm tìm chuoi con trong chuoi
*/
#include <stdio.h>
#include <string.h>
int main() {
	char str[50];
	strcpy(str, "hello ");
	strcat(str, "world");
	printf("%s", str);
}
