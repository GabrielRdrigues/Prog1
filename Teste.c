#include<stdio.h>
#include<stdlib.h>

int main(){

    int N,M,i,mov=0,x;
    int V[1005];

    //Leitura
    scanf("%d %d",&N,&M);
    for(i=0; i<N; i++){
        scanf("%d",&V[i]);
    }
    for(i=0; i<N-1; i++){
        //quanto falta para o elemento i
        x=M-V[i];
        //incremento nos elementos consecutivos
        V[i]+=x;
        V[i+1]+=x;
        //conta movimentos
        mov+=abs(x);
    }
    printf("%d\n",mov);


return 0;
}
