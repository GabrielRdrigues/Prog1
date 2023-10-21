#include <stdio.h>

// Ideia: Travar em um carro e pegar a posição de largada e chegada desse carro. Após isso percorrer esses dois vetores novamente e ver quais carros ultrapassaram esse nosso carro 
// fixado
// Fazer isso para todos os carros do grid de largada

int main(){
    
    int N,i,k,l,cont,j,largada[2400],chegada[2400];

    while(scanf("%d", &N) != EOF) {
        cont = 0;
        for(i=0;i<N;i++){
            scanf("%d",&largada[i]); // Leitura do vetor de largada
             }

        for(i=0;i<N;i++){
            scanf("%d",&chegada[i]); // Leitura do vetor de chegada
                  }

    // Procurando um carro

        for(i=0;i<N;i++){ // Posição Largada
             for(j=0;j<N;j++){ // Posição Chegada
                    if(largada[i]==chegada[j]){ // Travar em um carro
                        for(k=i;k<N;k++){ // Posição largada novo carro | Procurar os outros carros, e vamos ver se esse outros carros ultrapassaram nosso carro "Travado" ou não
                             for(l=0;l<N;l++){ // Posição chegada novo carro
                                    if(largada[k]==chegada[l]){ // Ver se pos largada = pos chegada do novo carro
                                        if(l<j){ // Ver se HOUVE a ultrapassagem, isto é, chegada do carro novo é menor que chegada do carro travado? se Sim houve.
                                            cont++;} // contador incrementa em 1
                                                    }
                                             }
                                         }
                                      }
                            }
                        }
        printf("%d\n",cont);
    }
        
    
    return 0;
}