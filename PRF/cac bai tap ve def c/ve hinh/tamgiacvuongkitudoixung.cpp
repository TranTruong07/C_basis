#include<stdio.h> 
//A                                   
//ABA  
//ABCBA
//ABCDCBA
int main(){
	int n,i,j;
	scanf("%d",&n);
	for( i=1;i<=n;i++){
		int cnt='A';
		int sum='A';
		for(j=1;j<=2*i-1;j++){
			if(j<=i){
				printf("%c",cnt);
				cnt+=1;
				sum=cnt-1;
			}
			else{
				--sum;
				printf("%c",sum);	
			}
		}
		printf("\n");
		}
	printf("\n");
//ABCDCBA 7   i=1  
//ABCBA   5   i=2  
//ABA     3   i=3 
//A	      1   i=4 
	for(int i=n;i>=1;i--){
		int cnt='A';
		int sum='A';
		for(j=2*i-1;j>=1;j--){
			if(j>=i){
				printf("%c",cnt);
				++cnt;
				sum=cnt-1;
			}
			else{
				--sum;
				printf("%c",sum);
			}
		}
		printf("\n");
	}
	printf("\n");
//      A 1
//    ABA 2	
//  ABCBA 3
//ABCDCBA 4	
	for(i=1;i<=n;i++){
		int cnt='A';
		int sum='A';
		for(j=1;j<=2*n-1;j++){
			if(j<2*n-2*i+1){
				printf(" ");
			}
			if(j>=2*n-2*i+1&&j<=2*n-i){
				printf("%c",cnt);
				cnt++;
				sum=cnt-1;
			}
			if(j>=2*n-2*i+1&&j>2*n-i){
				--sum;
				printf("%c",sum);
			}	
		}
		printf("\n");
	}
	printf("\n");
//ABCDCBA 4
//  ABCBA 3
//    ABA 2
//      A 1
	for(i=n;i>=1;i--){
		int cnt='A';
		int sum='A';
		for(j=1;j<=2*n-1;j++){
			if(j<=2*n-2*i){
				printf(" ");
			}
			if(j>2*n-2*i&&j<=2*n-i){
				printf("%c",cnt);
				++cnt;
				sum=cnt-1;
			}
			if(j>2*n-2*i && j>2*n-i){
				--sum;
				printf("%c",sum);
			}	
			}
			printf("\n");
		}
	}	
	
