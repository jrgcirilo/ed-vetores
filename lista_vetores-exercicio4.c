#include <stdio.h>



int main() {
   
int Vet[40];
   
int i, Ant, Seq, Aux;

   

for (i=0; i<40; i++)
      
scanf("%d", &Vet[i]);

   

Seq = -1;

   

do {
      
Seq++;

      

Ant = Seq;

      

for (i=Seq + 1; i<40; i++)
         
if (Vet[i] < Vet[Ant])
            
Ant=i;

      

Aux = Vet[Seq];
      
Vet[Seq] = Vet[Ant];
      
Vet[Ant] = Aux;
  
}
   

while (Seq < 40);

   
for (i=0; i<40; i++)
      
printf("%d\n", Vet[i]);


}
