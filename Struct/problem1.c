#include <stdio.h>
#include <string.h>
struct myStructure {
char Name[20];
int mark;
char address[30];
};
int main(){
	FILE *ptr;
	ptr = fopen("Student.txt", "w");
	if(ptr == NULL){
		printf("\nErro!");
		return 1;
	}
	struct myStructure s1 ,  s2 ,  s3 ,  s4 ;
	strcpy(s1.Name, "Joseph");
	s1.mark = 7;
	strcpy(s1.address,"12 Le Loi , Q1 , TPHCM");
	strcpy(s2.Name, "Dinh Tan Vu");
	s2.mark = 8;
	strcpy(s2.address,"12/66 duong so 3, go vap , TPHCM");
	strcpy(s3.Name, "Miranda");
	s3.mark = 5;
	strcpy(s3.address,"123 Calmette , District , HCM City");
	strcpy(s4.Name, "Ceine Dion");
	s4.mark = 9;
	strcpy(s4.address,"124 street 8, district 7 ,HCM City");
	fprintf(ptr, "%s  -  %s  -  %d\n", s1.Name, s1.address, s1.mark);
	fprintf(ptr, "%s  -  %s  -  %d\n", s2.Name, s2.address, s2.mark);
	fprintf(ptr, "%s  -  %s  -  %d\n", s3.Name, s3.address, s3.mark);
	fprintf(ptr, "%s  -  %s  -  %d\n", s4.Name, s4.address, s4.mark);
	fclose(ptr);
	return 0;
}

