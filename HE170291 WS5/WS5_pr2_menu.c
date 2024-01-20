#include <stdio.h>
#define max 100
int isFull(int *a, int n){
	return n==max;	
}
int isEmpty(int *a, int n){
	return n==0;
}
void input(int *a, int *pn){
	*pn = 0;
	printf("Enter maximum %d elements, 0 for termination \n", max);
	int x;
	do{
		scanf("%d", &x);
		if(x!=0){
			a[(*pn)++] = x;
		}
	}while(x!=0 && x < max);
}

void add(int *a, int *pn){
	int x;
	printf("Enter your element to add: ");
	scanf("%d", &x);		
	a[*pn] = x;
	(*pn)++;	
}

int LinearSearch(int *a, int n){		
	int x, i, count = 0;
	printf("Enter your element you want to Search: ");
	scanf("%d", &x);
	for(i = 0; i<n; i++){
		if(x == a[i]){	
			count++;					
		}
	}
	if(count > 0){
		printf("so phan tu xuat hien: %d\n", count);
	}else{
		printf("Not found!\n");
	}
}

void printSortedArray(int *arr, int n) {
	int i, j;
    int *sorted = malloc(n * sizeof(int)); // t?o m?t m?ng sorted m?i v?i các ph?n t? c?a m?ng arr
    for (i = 0; i < n; i++) {
        sorted[i] = arr[i];
    }

    // s?p x?p m?ng sorted theo th? t? tang d?n
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (sorted[i] > sorted[j]) {
                int temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    // in ra các ph?n t? c?a m?ng arr theo th? t? tang d?n
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[j] == sorted[i]) {
                printf("%d ", arr[j]);
                break;
            }
        }
    }

    free(sorted);
}

void Print(int *a, int *n){
	int i;
	for(i = 0; i< *n; i++){
		printf("%d  ", a[i]);
	}
}
void checkvalueinrange(int *a, int n){
	int c, b, i;
    printf("\n Enter minVal : ");
    scanf("%d", &c);
    printf("\n Enter MaxVal : ");
    scanf("%d", &b);
    for(i = 0; i<n; i++){
    	if(a[i] > c && a[i] < b )
    		printf("%5d", a[i]);
    }
}

int main() {
	int a, n, x, choose, pos, value, y;
	do{
		printf("1- Enter your array\n");
		printf("2- Add  a value\n");
		printf("3- Search a value\n");		
		printf("4- Print out the array \n");
		printf("5- Print out values in a range \n");
		printf("6- Print out the array in ascending order \n");		
		printf("Enter others number to Quit \n");
		printf("Enter your selection: ");
		scanf("%d", &choose);
		switch (choose){
			case 1:
				input(&a, &n);
				printf("\n");
				break;
			case 2:
				if(isFull(&a, n)){
					printf("\nSorry, the array is full\n");
				}else{				
				add(&a, &n);
				printf("Added\n");
				printf("\n");
				}
				break;
			case 3:
				LinearSearch(&a, n);				
				break;
			case 4:
				Print(&a, &n);
				printf("\n");
				break;
			case 5:
				checkvalueinrange(&a, n);
				printf("\n");
				break;
			case 6:
				printSortedArray(&a, n);
				printf("\n");
				break;			
			default:
				break;
		}
	}while(choose >=1 && choose <=6);
}
