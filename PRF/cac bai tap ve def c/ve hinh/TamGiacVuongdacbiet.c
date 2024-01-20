//A
//B B
//C C C
//D D D D
//E E E E E

//#include <stdio.h>
//int main() {
//   int i, j;
//   char input, alphabet = 'A';
//   printf("Enter an uppercase character you want to print in the last row: ");
//   scanf("%c", &input);
//   for (i = 1; i <= (input - 'A' + 1); ++i) {
//      for (j = 1; j <= i; ++j) {
//         printf("%c ", alphabet);
//      }
//      ++alphabet;
//      printf("\n");
//   }
//   return 0;
//}

//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

#include <stdio.h>
int main() {
    char i, j;
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 'A'; i <= rows; ++i) {
        for (j = 'A'; j <= i; ++j) {
            printf("%c ", j);
        }
        printf("\n");
    }
   return 0;
}

//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1

//#include <stdio.h>
//int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//        for (j = 1; j <= i; ++j) {
//            printf("%d ", j);
//        }
//        printf("\n");
//    }
//   return 0;
//}

//1
//2 3
//4 5 6
//7 8 9 10

//#include <stdio.h>
//int main() {
//    int rows, i, j, number = 1;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; i++) {
//        for (j = 1; j <= i; ++j) {
//            printf("%d ", number);
//            ++number;
//        }
//        printf("\n");
//    }
//    return 0;
//}












