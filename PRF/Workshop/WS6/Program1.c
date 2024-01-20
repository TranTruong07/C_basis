#include <stdio.h>
int checkISBN(int n) {
    int check = 0;
    int m[11], c[11]; //m: Array that contain 10 number of n, c: array that contain number that have been multiply from 10 - 2
    int k[9]={10,9,8,7,6,5,4,3,2}; //Array contain number from 10 - 2
    int i;
    int t;
    if (n > 1000000) {
        //Seperate number & push in arrays
        for (i=10; i>0; i--) {
            m[i] = n%10;
            n = n/10;
        }
        //Check & calculate T
        t=0;
        t = t+m[10];
        for (i=1; i<10; i++)
        {
            c[i]=k[i-1]*m[i];
            t = t+c[i];
        }
        if (t%11 ==0) check=1;
    }
    return check;

}

int main() {
    int n, check;
    do {
        printf("Enter n (Enter 0 to quit): ");
        scanf("%d", &n);
        if(checkISBN(n) == 1) printf("%d is an ISBN\n", n);
        if(n == 0){
        	printf("Quitted!\n");
        	printf("Have a Nice Day!\n");
		}
        else printf("%d is not an ISBN\n", n);
    } while(n!=0);
}

















