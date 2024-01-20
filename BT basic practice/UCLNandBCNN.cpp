
#include <stdio.h>
int KTUCLN(int x, int y){
	while(x!=y){
		if(x>y){
			x = x - y;
		}else{
			y = y - x;
		}
	}
	return x;
}

int KTBCNN(int x, int y){
	int S;
	S = (x*y)/KTUCLN(x, y);
	return S;
}
int main() {
	int a, b;
	do{
		printf("Nhap 2 gia tri a, b (a>0, b>0): \n");
		scanf("%d%d", &a, &b);
	}while(a<1 || b<1);
	printf("UCLN cua a va b: %d\n", KTUCLN(a, b));
	printf("BCNN cua a va b: %d\n", KTBCNN(a, b));
}
