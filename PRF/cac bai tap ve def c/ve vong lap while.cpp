//#include<stdio.h>
//
//int main(){
//	int i=1;
//	while(i<=10){
//		printf("%d\n",i);
//		++i;
//	}
//	printf("gia tri cuoi cung i sau khi ket thuc vong lap while la :%d",i);
//	return 0;
//}
 
 #include<stdio.h>
 int main(){
 	int i =1;
 	while(i<=10){
 		printf("%d\n",i);
 		if(i ==5)break;
// 		if(i==5)continue;
 		++i;
	 }
	 return 0;
 }
