
#include <stdio.h>



int v[10];

int v_aux[10];

int i, j, repete = 0, n = 0;



int main() {

  
for (i = 0; i < 10; i++) {
    
scanf("%d",&v[i]);
    
if (i == 0) {
      
v_aux[n] = v[i];
      
n++;
    } 
else {
      
repete = 0;
     
      
for (j = 0; j < n; j++) {
        
if(v[i] == v_aux[j]) {
          
repete++;
        }
      }
     
      
if (repete < 1) {
        
v_aux[n] = v[i];
        
n++;
      }
    }
  }

  
printf("Vetor Sem Repeticao: ");
  
for (i = 0; i < n; i++)
    
printf("%d ", v_aux[i]);

  
return 0;
}
