#include <stdio.h>

// Album da copa | 2779

int main() {
    
    int figurinhas[100];
    int N,M,i,j,soma=0;
    scanf("%d %d",&N,&M);
    for(i=1;i<=N;i++){
        figurinhas[i]= 1;
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

