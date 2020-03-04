#include <stdio.h>



int main()
{
    

int Vet[10];
    
int i, Maior;

    

for(i=0; i<10; i++)
       
scanf("%d",&Vet[i]);

    

Maior = Vet[0];
    
for(i=0; i<10; i++)
       
if (Vet[i] > Maior)
          
Maior = Vet[i];

    

printf("O maior elemento e %d\n",Maior);


}


