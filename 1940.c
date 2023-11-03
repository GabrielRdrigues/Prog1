#include <stdio.h>

int main(){
    int J,R,i,ind,indMax,K;
    int P[260000],S[506];
    scanf("%d %d",&J,&R);
    for(i=0;i<J*R;i++){
        scanf("%d",&P[i]);
    }
    for(i=0;i<J;i++){
        ind=i;
        S[i]=P[ind];
        for(K=1;K<R;K++){
            ind=ind+J;
            S[i]=S[i]+P[ind];
        }
    }
    indMax=0;
    for(i=1;i<J;i++){
        if(S[i]>=S[indMax]){
            indMax=i;
        }
    }
    indMax=indMax+1;
    printf("%d\n",indMax);

    return 0;
}