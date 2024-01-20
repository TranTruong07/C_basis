#include <stdio.h>
void input(int *str, int *pn){
	printf("Enter array(enter 0 to exits): \n");
	*pn = 0;
	int i;
	do{
		scanf("%d", &i);
		if(i!=0){
			str[(*pn)++] = i;
		}
	}while(i!=0);	
}
void selctsort(int *str, int n){
	int i, j, temp, min_pos;
	for(i = 0; i<n-1; i++){
		min_pos = i;
		for(j = i+1; j<n; j++){
			if(str[j]<str[min_pos]){
				min_pos = j;
			}
		}
		if(min_pos>i){
			temp = str[min_pos];
			str[min_pos] = str[i];
			str[i] = temp;
		}	
	}
}
void bubbleSort(int *str, int n){
	int i, j, temp;
	for(i = 0; i<n; i++){
		for(j = 0; j<n-i-1;j++){
			if(str[j]>str[j+1]){
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
		}
	}
}
void insertionSort(int *str, int n){
	int i, j, key, index;
	for(i = 1; i<n; i++){
		key = str[i];
		index = i-1;
		while(index >= 0 && str[index]> key){
			str[index+1] = str[index];
			--index;
		}
		str[index+1] = key;
	}
}
void outpu(int str[], int n){
	printf("\nOUTPUT: \n");
	int i;
	for(i = 0; i<n; i++){
		printf("%4d", str[i]);	
	}
}
int main() {
	int str[100], n;
	input(&str, &n);
	//printf("select sort algorithm\n");
	//selctsort(&str, n);
	//outpu(str, n);
//	printf("\nbubble sort algorithm\n");
	bubbleSort(&str, n);
	outpu(str, n);
	//printf("\ninsertion sort algorithm\n");
	insertionSort(&str, n);
	outpu(str, n);
}
