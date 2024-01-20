#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define Pi 3.141593
int main() {
   int r = 5;
   float x;
   printf("\ncircumference of a circle: ");
   x = 2*r*Pi;
   printf("%.2lf", x);
   printf("\narea of circle: ");
   float S;
   S = Pi * pow(r, 2);
   printf("%.2lf", S);
}
