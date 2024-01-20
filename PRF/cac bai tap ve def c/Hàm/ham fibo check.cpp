//kiemtra 1 so co nam trong day fibonaci
#include<stdio.h>
int Fibocheck(int n){
	if(n<0) return 0;
    if(n==0 ||n==1)return 1;

	int fn2=1,fn1=1,fn=fn2+fn1;
	while (n>fn){
		fn = fn1+fn2;
		fn2=fn1;
		fn1=fn;
	}return fn==n;
  }
	int main(){
		int i,n,count =0;
		printf("Enter n=");scanf("%d",&n);
		while(count<n){
			if(Fibocheck(i)){
				count++;
				printf("%d\n",i);
			}i++;
		}
	}

