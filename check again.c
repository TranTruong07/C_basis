#include <stdio.h>
void input(int *a, int *pn){
	*pn = 0;
	printf("Enter maximum %d elements, 0 for termination \n", MAXN);
	int x;
	do{
		scanf("%d", &x);
		if(x!=0)
			a[(*pn)++] = x;
	}while(x!=0 && *pn < MAXN);
}
int binarySearch(int x, int a[], int n){
	int i = 0, j = n-1, c;
	while(i != j){
		c = (i+j)/2;
		if(a[c]== x)
			return c;
		if(x<a[c])
			j = c - 1;
		else
			i = c + 1;
	}
	return -1;
}
int main(){
	int a[5];
	int n = 5, k1 = 3, k2 = 4, i;
	printf("Enter array: \n");
	for(i = 0; i<5; i++){
		scanf("%d", &a[i]);
	}
	int pos1 = binarySearch(k1, a, n);
	int pos2 = binarySearch(k2, a, n);
	if(pos1 >=0)
		printf("Position 1 of value %d is: %d\n", k1, pos1);
	else
		printf("Position 1 is not exisit\n");
	if(pos2 >=0)
		printf("Position 2 of value %d is: %d\n", k2, pos2);
	else
		printf("Position 2 is not exisit\n");
}
