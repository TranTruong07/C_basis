#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
  	int arr[1000], b[1000] = {0}, c[1000] = {0}; //Khoi tao 3 mang so nguyen
  	int i; scanf("%d", &n);
  	for(i = 0; i < n;i++)	scanf("%d", &arr[i]);
    for(i = 0; i < n;i++)
    {
  	    if(arr[i] > 0) 
  		    b[arr[i]]++;  
  	    if(arr[i] < 0) 
  		    c[-arr[i]]++; 
    }
    int max = 0;
    for(i = 0; i <n ;i++){
  	if(arr[i] > 0){
  		if(b[arr[i]] > max)
  			max = b[arr[i]];
  	}
  	else{
  		if(c[-arr[i]] > max)
  			max = c[-arr[i]];
  	}
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i = 0; i <1000 ;i++){
  	if(b[i] == max)
  		printf("%d", i);
  	if(c[i] == max)
  		printf("%d", -i);
  } //In ra phan tu co lan xuat hien nhieu nhat trong day
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}





