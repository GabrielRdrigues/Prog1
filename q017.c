#include <stdio.h>

// Album de Figurinha | 2783

int main() {
    
    int figurinhas[100];
    int N,C,M,i,j,soma=0;
    scanf("%d %d %d",&N,&C,&M);
    for(i=1;i<=N;i++){
        figurinhas[i]= 0;
    }
    for(i=1;i<=C;i++){
        scanf("%d",&j);
        figurinhas[j] = 1;
    }
    for(i=1;i<=M;i++){
        scanf("%d",&j);
        if(figurinhas[j]==1){
            figurinhas[j]=0;
        }
    }
    for(i=1;i<=N;i++){
        soma = soma + figurinhas[i];
    }

    printf("%d\n",soma);
    return 0;

}

