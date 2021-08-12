#include <stdio.h>

int main() {
   int n1;
   scanf("%i", &n1);

  if(n1==0)
   printf("NUMERO NEUTRO");

  else
  {
  if(n1%2==0){

    printf("NUMERO PAR ");
  if(n1 < 0){

    printf("NEGATIVO");
  }

  if(n1 > 0){

    printf("POSITIVO");
  }

  }
  else
  {

    printf("NUMERO IMPAR ");

  if(n1 < 0){

    printf("NEGATIVO");
  }

  if(n1 > 0){

    printf("POSITIVO");
  }

  }
  }
 
       return 0;
}