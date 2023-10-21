#include <stdio.h>

int main()
{
    
    int n,k,i,ini,fim,meio,aux=0;
    int v[10000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    ini = 1;
    fim= n;
    while(ini<=fim){
        meio=(ini+fim)/2;
        if(v[meio]==k){
            printf("achou");
            fim=ini-1;
            aux=1;
        }else{
            if(v[meio]<k){
                ini=meio+1;
            }else{
                fim=meio-1;
            }
        }
    }
    if(aux==0){
        printf("nao achou");
    }
    

    return 0;
}
