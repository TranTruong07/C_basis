//Hinh binh hanh
//*****
// *****
//  *****
//   *****
//    *****
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
//nua hinh thoi nguoc lai
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <ctype.h>
//int main() {
//  int n;scanf("%d", &n);
//  printf("\nOUTPUT:\n");
//  int i,j;
//  for(i = 0; i < 2*n - 1;i++) { 
//  //Trong vong for nay dung de in hang
//    for(j = 0; j < n;j++) {//Trong 1 hang toi da la n sao
//      if(i >= n -1 - j && i <= n -1 +j)
//      /*i>= n -1 - j: Dieu kien in ra so sao hang phia duoi*/
//      /*i <= n -1 +j: Dieu kien in ra so sao o hang phia tren*/
//        printf("*");
//      else printf(" ");
//    }
//  }
//  printf("\n");
//}
//  return(0);
//}
//*
//**
//***
//**
//*
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

//  *
// ***
//*****
// ***
//  *
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

//* * * * * * * * *
//* *           * *
//*   *       *   *
//*     *   *     *
//*       *       *
//*     *   *     *
//*   *       *   *
//* *           * *
//* * * * * * * * *

//#include <stdio.h>
//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= n; j++)
//        {
//            if (i == 1 || i == j || j == 1 || j == n || i == n || i + j == n + 1)
//                printf("* ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//}
//    *****
//   *   *
//  *   *
// *   *
//*****
//#include <stdio.h>
//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++){
//        for (j = 1; j < n - i + 1; j++)
//            printf(" ");
//        for (j = 1; j <= n; j++){
//            if (i == 1 || j == 1 || i == n || j == n)   printf("*");         
//            else  printf(" ");
//        }
//        printf("\n");
//    }
//}

//    *
//   ***
//  *****
// *******
//*********
//***   ***
//***   ***
//***   ***

//#include <stdio.h>
//
//int main()
//{
//    int i, j, space, rows = 8, star = 0;
//    for (i = 0; i < rows; i++){
//        if (i < 5){
//            for (space = 1; space < 5 - i; space++)     printf(" ");
//            while (star != (2 * i + 1)){
//                printf("*");
//                star++;
//                ;
//            }
//            star = 0;
//            printf("\n");
//        }
//        else{
//            for (j = 0; j < 9; j++){
//                if ((int)(j / 3) == 1)
//                    printf(" ");
//                else
//                    printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//             *
//          *  *  *
//       *  *  *  *  *
//    *  *  *  *  *  *  *
// *  *  *  *  *  *  *  *  *
//    *  *  *  *  *  *  *
//       *  *  *  *  *
//          *  *  *
//             *
//#include <stdio.h>
//int main()
//{
//    int n;
//    printf("input n: ");
//    scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++){
//        for (int j = 1; j <= n - i; j++) printf("   ");
//        for (int j = 1; j <= 2 * i - 1; j++)  printf(" * ");
//        printf("\n");
//    }
//    for (int i = n - 1; i >= 1; i--){
//        for (int j = 1; j <= n - i; j++)    printf("   ");
//        for (int j = 1; j <= 2 * i - 1; j++)
//            printf(" * ");
//        printf("\n");
//    }
//}

// *  *  *  *  *  *  *  *  *  *
// *  *  *  *        *  *  *  *
// *  *  *              *  *  *
// *  *                    *  *
// *                          *
// *  *                    *  *
// *  *  *              *  *  *
// *  *  *  *        *  *  *  *
// *  *  *  *  *  *  *  *  *  *

//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++){
//        for (int j = 1; j <= 2 * n; j++){
//            if (j <= n - i + 1 || j >= n + i) printf(" * ");
//            else printf("   ");
//        }
//        printf("\n");
//    }
//    for (int i = n - 1; i >= 1; i--){
//        for (int j = 1; j <= 2 * n; j++){
//            if (j <= n - i + 1 || j >= n + i)  printf(" * "); 
//            else    printf("   ");
//        }
//        printf("\n");
//    }
//}

//Enter the number of columns5
//    *****
//   ****
//  ***
// **
//*
// **
//  ***
//   ****
//    *****
//#include <stdio.h>
//int main(void)
//{
//    int n;
//    printf("Enter the number of columns");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++){
//        for (int j = 1; j <= n - i; j++)   printf("   ");
//        for (int k = 0; k <= n - i; k++)   printf(" * ");
//        printf("\n");
//    }
//    for (int i = 1; i < n; i++){
//        for (int j = 1; j < i + 1; j++)      printf("   "); 
//        for (int k = 1; k <= i + 1; k++)     printf(" * ");
//        printf("\n");
//    }
//    return 0;
//}


//Enter the odd number only 5
//       +
//       +
// +  +  +  +  +
//       +
//       +

//#include <stdio.h>
//int main(void)
//{
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++){
//        if (i == ((n / 2) + 1)){
//            for (int j = 1; j <= n; j++)  printf(" + ");           
//        }
//        else{
//            for (int j = 1; j <= n / 2; j++)
//                printf("   ");
//            printf(" + ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//Enter the number of rows: 5
//    *  *           *  *
// *  *  *  *     *  *  *  *
// *  *  *  *  *  *  *  *  *
//    *  *  *  *  *  *  *
//       *  *  *  *  *
//          *  *  *
//             *

//#include <stdio.h>
//
//int main()
//{
//    int i, j, rows;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = rows / 2; i <= rows; i += 2){
//        for (j = 1; j < rows - i; j += 2)
//            printf("   ");
//        for (j = 1; j <= i; j++)
//            printf(" * ");
//        for (j = 1; j <= rows - i; j++)
//            printf("   ");
//        for (j = 1; j <= i; j++)
//            printf(" * ");
//        printf("\n");
//    }
//    for (i = rows; i >= 1; i--){
//        for (j = i; j < rows; j++)
//            printf("   ");
//        for (j = 1; j <= (i * 2) - 1; j++)
//            printf(" * ");
//        printf("\n");
//    }
//    return 0;
//}

//Hinh chu Z
//#include <stdio.h>
//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++){
//        for (j = 1; j <= n; j++){
//            if (i == 1 || i == n || i == j)
//                printf("* ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//}

//Hinh Dong ho cat
//#include <stdio.h>
//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++){
//        for (j = 1; j <= n; j++){
//            if (i == 1 || i == n || i == j || i + j == n + 1)
//                printf("* ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//}













