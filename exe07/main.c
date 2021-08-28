#include <stdio.h>

int main (){

int n,maior,menor;
scanf("%i",&n);

int vet[n];
for(int i = 0;i<n;i++)
{
scanf("%i",&vet[i]);
}

maior = vet[0];
menor = vet[0];

for(int i=0;i<n;i++){



if (vet[i] > maior)
{
  maior = vet[i];

}

if (vet[i] < menor)
{
 menor = vet[i];
}


}

printf("MENOR = %i\n",menor);
printf("MAIOR = %i\n",maior);

}