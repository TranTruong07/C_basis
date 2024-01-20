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

int Remove(int pos, int *a, int *pn){
	if(pos < 0 || pos > *pn)
		return 0;
	int i;
	for(i = pos; i<*pn; i++){
		a[i] = a[i+1];
	}
	(*pn)--;
	return 1;
}

int RemoveAll(int x, int *a, int *pn){
	int result = 0, i, j;
	for(i = *pn-1; i>=0; i--){
		if(x == a[i]){
		for(j = i; i<*pn; i++){
			a[i] = a[i+1];
			result = 1;
		}
		(*pn)--;
		}
	}
	return result;
}
int LinearSearch(int x, int *a, int n){	
	int i;
	for(i = 0; i< n; i++){
		if(x==a[i])
		return i;
	}
	return -1;
}

void ascendingSort(int *a, int n){
	int minindex;
	int i, j, t;
	for(i = 0; i< n-1; i++){
		minindex = i;
		for(j = i+1; j< n; j++){
			if(a[j]<a[minindex])
				minindex = j;						
		}
		if(minindex>i){
				t = a[minindex];
				a[minindex] = a[i];
				a[i] = t;
			}
	}
	printf("\n");
	for(i = 0; i< n; i++){
		printf("%d  ", a[i]);
	}
}

void descendingSort(int *a, int n){
	int minindex;
	int i, j, t;
	for(i = 0; i< n-1; i++){
		minindex = i;
		for(j = i+1; j< n; j++){
			if(a[j]>a[minindex])
				minindex = j;						
		}
		if(minindex>i){
				t = a[minindex];
				a[minindex] = a[i];
				a[i] = t;
			}
	}
	printf("\n");
	for(i = 0; i< n; i++){
		printf("%d  ", a[i]);
	}
}

void Print(int *a, int *n){
	int i;
	for(i = 0; i< *n; i++){
		printf("%d  ", a[i]);
	}
}
int main() {
	int a, n, x, choose, pos, value, y;
	do{
		printf("1- Enter your array\n");
		printf("2- Add  a value\n");
		printf("3- Search a value\n");
		printf("4- Remove the first existence of a value\n");
		printf("5- Remove all existences of a value\n");
		printf("6- Print out the array \n");
		printf("7- Print out the array in ascending order (positions of elements are preserved) \n");
		printf("8- Print out the array in descending order (positions of elements are preserved) \n");
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
				if(isEmpty(a, n)){
					printf("\nSorry, the array is Empty. \n");
				}else{
					printf("Enter your element you want to Search: ");
					scanf("%d", &x);
					pos = LinearSearch(x, &a, n);
					if(pos>0)
						printf("Postion is found: %d\n", pos);
					else
						printf("Not found!\n");
				}
				break;
			case 4:
				if(isEmpty(a, n)){
					printf("\nSorry, the array is Empty. \n");
				}else{
					printf("Enter where you want to Remove: ");
					scanf("%d", &value);					
					if(Remove(value, &a, &n) == 1)
						printf("Removed\n");
					else
						printf("Not found!\n");
				}
				break;
			case 5:
				if(isEmpty(a, n)){
					printf("\nSorry, the array is Empty. \n");
				}else{	
					//RemoveAll(&a, &n);
					printf("Enter element you want remove: ");
					scanf("%d", &y);									
					if(RemoveAll(y, &a, &n) == 1)
						printf("Removed\n");
					else
						printf("Not found!\n");
				}
				break;
			case 6:
				Print(&a, &n);
				printf("\n");
				break;
			case 7:
				ascendingSort(&a, n);
				printf("\n");
				break;
			case 8:
				descendingSort(&a, n);
				printf("\n");
				break;
			default:
				break;
		}
	}while(choose >=1 && choose <=8);
}
