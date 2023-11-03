#include <stdio.h>

int main()
{
    int n,i,j,aux;
    int A[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    aux=1;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i][j]==A[j][i]){

            }else{
                aux=0;
                i=n+1;
                j=n+1;
            }
        }
    }
    if(aux==1){
        printf("simetrica");
    }else{
        printf("nao eh simetrica");
    }


    return 0;
}
