
#include<stdio.h>
#include<math.h>
int fibo(int n) {
    int t1 = 1, t2 = 1, f = 1;
    for(int i = 3; i <= n; i++) {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}
int main() {
    int n;
    do{
    	printf("Enter nth in fibonacci: "); scanf("%d", &n);
	}while(n<2);
    printf("%dth Fibonacci = %d", n,fibo(n));
}












