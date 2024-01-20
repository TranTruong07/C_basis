//So doi xung(Palindrome)
//#include<stdio.h>  
//#include<conio.h>  
//main()  
//{  
//int n,r,sum=0,bientam;  
//    printf("Nhap mot so bat ky: "); scanf("%d",&n);  
//    bientam=n;  
//    while(n>0){  
//        r=n%10;  
//        sum=(sum*10)+r;  
//        n=n/10;  
//    }  
//    if(bientam==sum)  printf("\nSo ban da nhap la so Palindrome!");  
//    else  printf("\nSo ban da nhap khong phai la so Palindrome!");  
//}
//Chuyen so thap phan thanh nhi phan
//#include<stdio.h>  
//main(){  
//int a[10],n,i;  
//    printf("Nhap mot so bat ky: ");  scanf("%d",&n);  
//    for(i=0;n>0;i++){  
//        a[i]=n%2;  
//        n=n/2;  
//    }  
//    printf("\nDang nhi phan cua so vua nhap la = ");  
//    for(i=i-1;i>=0;i--)  printf("%d",a[i]);   
//}
//tam giac vuong trai duoi
//#include<stdio.h>
//int main()
//{
//	int n;
//	printf("Enter n: "); scanf("%d",&n);
//	for(int i=0; i<=n; i++){
//		for(int j=0; j<=i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//tam giac vuong trai tren
//#include<stdio.h>
//int main(){
//    int n;
//    printf("Enter n: "); scanf("%d",&n);                     
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n+1-i;j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//tam giac vuong phai duoi
//#include<stdio.h>
//int main(){
//    int n;
//    printf("Enter n: "); scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            if(j<=n-i) printf((" "));
//            else printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//Tam giac vuong phai tren
//#include<stdio.h>
//int main(){
//    int n;
//    printf("Enter n: "); scanf("%d",&n);
//    for(int i=n;i>=1;i--){
//        for(int j=1;j<=n;j++){
//            if(j<=n-i) printf(" ");
//            else printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//Tam giac vuong rong
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=i;j++){
//            if(i==1 || i==n || j==1 || j==i) 
//            printf("*");
//            else printf(" ");
//        }
//         printf("\n");
//    }
//     return 0;
//}

//Tam giác cân huong len
//#include<stdio.h>
//int main()
//{
//    int n;
//    printf("Enter n: "); scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        //xu li dau cach
//        for(int j=1;j<=n-i;j++){
//            printf(" ");
//        }
//        //xay dung dau *
//        for(int j=1;j<=2*i-1;j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//   int n,i,j;
//
//   scanf("%d", &n);
//
//   printf("Ve tam giac sao deu:\n\n");
//   for(i = 1; i <= n; i++) {
//      for(j = 1; j < i; j++)
//         printf(" "); 
//
//      for(j = i; j <= n; j++)
//         printf("* ");
//
//      printf("\n");
//   }
//
//   return 1;
//}


//Hinh binh hanh
//#include<stdio.h>
//int main()
//{
//    int n,m;
//    scanf("%d%d",&n,&m);
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=i-1;j++){
//            printf(" ");
//        }
//        for(int j=1;j<=m;j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//Hinh mui ten
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=i;j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    for(int i=n-1;i>=1;i--){
//        for(int j=1;j<=i;j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//Hinh chu nhat dac
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            printf(" * ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

// Hinh chu nhat rong
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            if(i==1 || i==n || j==1 || j==n)
//            printf(" * ");
//            else printf("   ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

// hinh chu nhat ben trong la ki tu.
//#include<stdio.h>
//int main(){
//    int m,n;
//    scanf("%d%d", &m,&n);
//    for(int i=1;i<=m;i++){
//        for(int j=1;j<=n;j++){
//            if(i==1 || i==m || j==1 || j==n)
//            printf("*");
//            else printf("~");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//Tam giac can so
//#include<stdio.h>   
//main(){  
//int i,j,k,l,n;  
//    printf("Nhap pham vi: ");  
//    scanf("%d",&n);  
//    for(i=1;i<=n;i++){  
//        for(j=1;j<=n-i;j++) printf(" ");   
//        for(k=1;k<=i;k++)  printf("%d",k);  
//        for(l=i-1;l>=1;l--) printf("%d",l);  
//    printf("\n");  
//    } 
//}  

//Tam giac chu cai
//#include<stdio.h>  
//#include<conio.h>  
//
//int main(void)  
//{  
//    int kytu=65; 
//	int n; scanf("%d", &n); 
//    int i,j,k,m;     
//    for(i=1;i<=n;i++){  
//        for(j=n;j>=i;j--)  
//            printf(" ");  
//        for(k=1;k<=i;k++)  
//            printf("%c",kytu++);  
//            kytu--;  
//        for(m=1;m<i;m++)  
//            printf("%c",--kytu);  
//        printf("\n");  
//        kytu=65;  
//    }   
//}  

//Tam giac fibonaci
//#include<stdio.h>  
//#include<conio.h>  
//
//int main(void)  
//{  
//    int a=0,b=1,i,c,n,j;  
//     
//    printf("Nhap pham vi: ");  
//    scanf("%d",&n);  
//    for(i=1;i<=n;i++)  
//    {  
//        a=0;  
//        b=1;  
//        printf("%d",b);  
//        for(j=1;j<i;j++)  
//        {  
//            c=a+b;  
//            printf("%d",c);  
//            a=b;  
//            b=c;  
//        }  
//        printf("\n");  
//    }   
//}  

// HInh THOI

//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n-i;j++)
//            printf(" ");
//        for(int j=1;j<=2*i-1;j++)
//            printf("*");
//        printf("\n");
//    }
//    for(int i=n-1;i>=1;i--){
//        for(int j=1;j<=n-i;j++)
//            printf(" ");
//        for(int j=1;j<=2*i-1;j++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}

//Xoa so trung nhau co trong mang
#include<stdio.h>
#include<math.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==a[j]&&a[i]%2!=0){
				for(k=j;k<n-1;k++){
					a[k]=a[k+1];
					}
					n--;
					j--;				
			}		
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}












