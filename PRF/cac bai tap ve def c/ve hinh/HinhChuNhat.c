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

 //hinh chu nhat ben trong la ki tu.
#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d", &m,&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==m || j==1 || j==n)
            printf("*");
            else printf("~");
        }
        printf("\n");
    }
    return 0;
}





