#include <stdio.h>
void checkmax(int a[], int n){
	int i, j, b[7] = {0};
	for(i = 0; i< n; i++){
		for(j = i ; j<n; j++){
			if(a[i] == a[j])
				b[i]++;
		}
	}
	int max = 1;
	for(i = 0; i< n ; i++){
		if(b[i]>max){
			max = b[i];
		}
	}
	for(i = 0; i< n; i++){
		if(max == b[i]){
			printf("%d ", a[i]);
		}
	}
}
int main() {
    int arr[7];
    int freq[7];
    int max_freq = 0;
	int i;
	for(i = 0; i< 7; i++){
		scanf("%d", &arr[i]);
	}
    for(i = 0; i< 7; i++){
    	if(arr[i] >=10 && arr[i]<100){
    		freq[max_freq] = arr[i];
    		max_freq++;
		}
	}
	printf("\nOUTPUT\n");
	if(max_freq==0){
		printf("no two-digit number");
		return 0;
	}
	checkmax(freq, max_freq);
    return 0;
}
