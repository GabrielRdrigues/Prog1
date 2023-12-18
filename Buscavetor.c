#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//limita o tamanho do maior inteiro gerado
#define lim 100
//N tamanho do vetor
#define N 100000

void geraVetorAleatorio(int V[], int ini, int fim){
    int i;

    srand(time(NULL));
    for(i=ini;i<=fim;i++){
        V[i]=rand()%lim;
    }

}

void imprimirV(int V[],int ini, int fim){

    int i;

    printf("V = ");
    for(i=ini;i<=fim;i++){
        printf("%d ",V[i]);
    }
    printf("\n");

}

int busca(int V[],int ini, int fim, int x){
    int i;

    for(i=ini; i<=fim; i++){
        if(V[i] == x){
            return i;
        }
    }
    return -1;
}

int elementoMin(int V[], int ini, int fim){
    int i,indMin;

    indMin=ini;
    for(i=ini+1; i<=fim; i++){
        if(V[i] < V[indMin]){
            indMin = i;
        }
    }
    return indMin;
}

void selecao(int V[], int ini, int fim){
    int i=ini,indMin,aux;

    for(i=ini; i<fim; i++){
        indMin = elementoMin(V,i,fim);
        aux=V[i];
        V[i]=V[indMin];
        V[indMin]=aux;
        imprimirV(V, ini, fim);
    }

}





int main(){
    int i=0,tam=N,ind;
    int V[N];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    geraVetorAleatorio(V, 0, tam-1);
    imprimirV(V, 0, tam-1);
    //ind=elementoMin(V,0,tam-1);
    selecao(V,0,tam-1);
    //imprimirV(V, 0, tam-1);
    //printf("elemnto minimo: %d\n",V[ind]);

return 0;
}