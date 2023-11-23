#include <stdio.h>

typedef struct string{
    char string[50];
}string;

int cmp(string A[],int minimo,int j){
    int i;
    for(i=0;A[minimo].string[i]==A[j].string[i] && A[minimo].string[i]!='\0';i++){}
    if(A[minimo].string[i]==A[j].string[i]){
        return 0;
    }
    if(A[minimo].string[i]<A[j].string[i]){
        return -1;
    }else{
        return 1;
    }
    
}

int indM(string vetor[],int i,int fim){
    int j,minimo=i;
    for(j=i+1;j<=fim;j++){
        if(cmp(vetor,minimo,j)==1){
            minimo=j;
        }
    }
    return minimo;
}

void selecao(string vetor[],int ini,int fim){
    int minimo;
    string aux;

    for(int i=ini;i<fim;i++){
        minimo=indM(vetor,i,fim);
        aux = vetor[i];
        vetor[i]=vetor[minimo];
        vetor[minimo]=aux;
    }
}

int main(){
    string vetor[20];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",vetor[i].string);
    }
    selecao(vetor,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d - %s\n",i,vetor[i].string);
    }
}