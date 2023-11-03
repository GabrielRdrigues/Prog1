#include <stdio.h>

int main()
{
    int n,x,aux=0;
    int v[10],i;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
        if(v[i]==x){
            aux=1;
        }
    }
    if(aux==1){
        printf("pertence");
    }else{
        printf("n pertence");
    }
    return 0;
}
