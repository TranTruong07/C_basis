//liet ke so hoan hao 
#include<stdio.h>
#include<math.h>
int Perfect(int a){
    int sum=0;
	if (a<0)return 0;  
	
	for(int i=1;i<=a/2 ;i++){
 		if(a% i==0){
 			sum=sum+i;
 		    if(a==sum)return 1;}
		}return 0;
}

 int main(){
 	int n;
 	printf("enter the number :");scanf("%d",&n);
    if(Perfect(n) == 1)printf("perfect");
    else printf("not perfect"); 
    return 0;
//    for(int i=0;i<=n;i++)
//	  if(Square(i)==1)printf("%d\n",i);
//	  return 0;
 	}
 
