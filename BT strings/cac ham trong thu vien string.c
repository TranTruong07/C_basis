/*
Thu vien string.h trong C
C�c h�m trong thu vien string.h
H�m strlen 
H�m strcmp � h�m so s�nh 2 chuoi
H�m strcat � h�m noi 2 chuoi
H�m strcpy � h�m copy chuoi
H�m strlwr � �ua chuoi ve dang lowercase
H�m strupr � dua chuoi ve dang uppercase
H�m strrev � h�m dao nguoc chuoi
H�m strchr � Tra ve vi tr� dau ti�n cua k� tu can t�m
H�m strstr � h�m t�m chuoi con trong chuoi
*/
#include <stdio.h>
#include <string.h>
int main() {
	char str[50];
	strcpy(str, "hello ");
	strcat(str, "world");
	printf("%s", str);
}
