#include <stdio.h>

// 2879 | Desvendando Monty Hall

int main() {
    
    int i,N,P,ganhou;
    ganhou=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&P);
        if(P!=1){
            ganhou++;
        }

    }
    printf("%d\n",ganhou);


    return 0;

}

