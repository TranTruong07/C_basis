/*
Cac ham cua thu vien ctype.h
- int isalnum(int a) kiem tra ky tu có phai so(0->9) hay ky tu chu cai(a->z hoac A->Z) hay khong
- int isalpha(int a) kiem tra ky tu có phai chu cai hay khong
- int iscntrl(int a) kiem tra ky tu có phai ky tu dieu khien hay khong VD: \n, \t....
- int isdigit(int a) kiem tra ky tu co phai chu so thap phan hay khong
- int islower(int a) ham nay kiem tra xem ky tu co phai ky tu chu thuong hay khong
- int isspace(int a) ham nay kiem tra xem ky tu co phai ky tu trang khong
- int isupper(int a) ham nay kiem tra xem ky tu co phai ky tu viet hoa khoong
int tolower (int c);
int toupper (int c);

*/
#include <stdio.h>
#include <ctype.h>

int main() {
	//int a = ' ';
	char b = '2';
	//printf("%d", isalnum(a)); // ham nay tra ve khac 0 neu la ky tu so hoac chu cai, con lai se tra ve 0
	printf("%d", isalpha(b));  // ham nay tra ve khac 0 neu la ky tu chu, con lai la tra ve 0
//	printf("%d", iscntrl(a));	// ham nay tra ve khac 0 neu la ky tu dieu khien(\n, \t,...), con lai la tra ve 0
//	printf("%d", islower(b));	// ham nay tra ve khac 0 neu la ky tu thuong, con lai la tra ve 0
}

