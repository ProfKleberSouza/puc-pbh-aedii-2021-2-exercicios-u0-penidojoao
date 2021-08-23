#include <stdio.h>

int main(){

  int x,y,z,lado1,lado2,lado3;
  scanf("%i %i %i", &x, &y, &z);

  lado1 = x+y;
  lado2 = y+z;
  lado3= x+z;

  if(x>lado2||y>lado3||z>lado1){

    printf("OS LADOS NAO FORMAM UM TRIANGULO\n");

  }

  else{
  
   if(x==y&&x==z){

     printf("TRIANGULO EQUILÁTERO\n");
     }

    if(x==y&&x!=z){
         
     printf("TRIANGULO ISÓSCELES\n");    

    }

    else if (x==z&&x!=y){
         
     printf("TRIANGULO ISÓSCELES\n");    

    }

    else if(y==z&&y!=x){
         
     printf("TRIANGULO ISÓSCELES\n ");    

    }

    else if(x!=y&&x!=z){

     printf("TRIANGULO ESCALENO\n");
     }


  }







}