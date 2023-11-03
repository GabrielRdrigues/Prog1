#include <stdio.h>
int main (){
    int N,soma=0,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        soma = soma + i*i;
    }
    printf("A soma eh %d",soma);
    return 0;
}