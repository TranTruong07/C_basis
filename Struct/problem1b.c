#include <stdio.h>

struct student {
	char name[50];
	int mark;
	char address[50];
};
void input(struct student *arr, int n){
	int i;
	printf("Enter mark: \n");
	for(i = 0; i<n; i++){
		printf("\nEnter name (student[%d]): ", i);
		fflush(stdin);
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("\nEnter address (student[%d]): ", i);
		fflush(stdin);
		fgets(arr[i].address, sizeof(arr[i].address), stdin);
		printf("\nEnter mark (student[%d]): ", i);
		scanf("%d", &arr[i].mark);
	}
}
void output(struct student arr[], int n){
	int i;
	printf("OUT PUT:\n");
	for(i = 0; i<n; i++){
		printf("%s", arr[i].name);
		printf("%s", arr[i].address);
		printf("%d", arr[i].mark);
	}
}
int main() {
	struct student students[2];
	input(students, 2);
	output(students, 2);
	
}
