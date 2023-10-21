// Ordenação de um vetor por seleção

#include <stdio.h>

int main()
{
    int n,i,v[100],j,indM;
    int troca;

    scanf("%d",&n);

    // Leitura do vetor
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    // Imprimir vetor desordenado
     for(i=0;i<n;i++){
        printf("%d ",v[i]);
    }

    printf("\n");

    // Ordenação do vetor
    for(i=0;i<n-1;i++){
        indM=i;
        for(j=i+1;j<n;j++){
            if(v[j]<v[i]){
                indM=j;
            }
        }
        troca=v[indM];
        v[indM]=v[i];
        v[i]=troca;
    }

    // Imprimir vetor ordenado
    for(i=0;i<n;i++){
        printf("%d ",v[i]);
    }

    return 0;

}