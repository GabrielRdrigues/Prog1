#include <stdio.h>

int main() {

   int N;
   scanf("%d",&N);
  // Verificação se N é multiplo de 3
   if(N%3==0){
    printf("0\n");
   }else{ // Se N nao for multiplo de 3, verificar se é par
       if(N%2==0){
            if(N%3==1){ // Se N for par, verificar se dividindo por 3 resto 1
                printf("1\n");
            }else{ // Se N for par e divisao por 3 restar 2
            printf("2\n");}
       }else{ // Se N nao for par (se for impar)
           if(N%3==1){ // N Impar dividindo por 3 resto 1
            printf("1\n");
           }else{ // N Impar dividindo por 3 resto 2
           printf("2\n");}

       }

   }

    return 0;
}