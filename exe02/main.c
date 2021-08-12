#include <stdio.h>

int main() {
   int t;
   float v,r;
  
   scanf("%i %f %f", &t, &v, &r);
   printf("R = %0.0f\n", r);
   printf("V = %0.0f\n", v);
   printf("T = %i\n", t);
   printf("D = %0.0f\n", t*v);
   printf("L = %0.0f\n", (t*v)/r);
   return 0;
}