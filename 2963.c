#include <stdio.h>

int main(){

    int N,i,aux=1,V[100000];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&V[i]);
    }
    for(i=1;i<N;i++){
        if(V[0]>=V[i]){

        }else{
            i=N+1;
            aux=0;
        }
    }
    if(aux==0){
        printf("N\n");
    }else{
        printf("S\n");
    }
    

    return 0;
}