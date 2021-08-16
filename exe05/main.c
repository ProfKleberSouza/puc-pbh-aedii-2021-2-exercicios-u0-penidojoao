#include <stdio.h>

int main() {

 float nota;
 float a,b,c,d;
 scanf("%f %f %f %f", &a, &b, &c, &d);
 
 nota = (a+b+c+d)/4;

 if(nota >= 6){

   printf("NOTA = %0.1f (APROVADO)",nota);
 }

else
{
  printf("NOTA = %0.1f (REPROVADO)",nota);
}


 return 0;
}