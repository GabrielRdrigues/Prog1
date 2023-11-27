#include <stdio.h>

int conta(int i,int numero[],char ladobota[],int N){
    int j;
    int aux;
    aux=i;
    for(j=i+1;j<N;j++){
        if(numero[j]==numero[aux] && ladobota[j]!=ladobota[aux]){
            numero[j]=0;
            ladobota[j]=' ';
            return 1;
        }
    }
    return 0;
}

int main(){
    int numero[61];
    int i,N,cont=0;
    char pe[61];

    while(scanf("%d",&N)==1){
    cont=0;
        for(i=0;i<N;i++){
        scanf("%d %c",&numero[i],&pe[i]);
    }
    for(i=0;i<N;i++){
        if(conta(i,numero,pe,N)==1){
            cont++;
        }
    }
    printf("%d\n",cont);
    
    }
    return 0;
}