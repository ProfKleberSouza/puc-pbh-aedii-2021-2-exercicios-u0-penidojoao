#include <stdio.h>

int main() {
   int a,b,c,maior,menor;
   scanf("%i %i %i", &a, &b, &c);
   maior = 0;
   menor = 0;
   if(a > b && a > c ){

     maior = a;
   }
   if(b > a && b > c ){

     maior = b;
   }

  if(c > a && c > b ){

    maior = c;}

  if(a < b && a < c ){


    menor = a;
  }  

  if(b < a && b < c ){


    menor = b;
  }  

  if(c < b && c < a ){


    menor = c;
  }  

printf("MENOR = %i\n", menor);
printf("MAIOR = %i\n", maior);


}