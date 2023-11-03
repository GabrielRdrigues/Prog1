/// beecrowd | 2422
#include <stdio.h>

int main() {

    int N, V[100000];
    int i,K,ini,fim,meio;
    
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&V[i]);
    }
    scanf("%d",&K);
    ini = 0;
    for(i=0;i<N-1;i++){
        ini = i +1;
        fim = N -1;
        while(ini<=fim){
            meio = (ini+fim)/2;
            if(K - V[i] ==V[meio]){
                printf("%d %d\n",V[i],V[meio]);
                ini = fim +1;
                i = N;
            }else{
                if(K - V[i] < V[meio]){  // 1 2 3 5   K 5     2     3
                    fim = meio - 1;
                }else {
                    if(K - V[i] > V[meio]){
                        ini = meio + 1;
                    }
                }
            }
        }
    }
    return 0;
}