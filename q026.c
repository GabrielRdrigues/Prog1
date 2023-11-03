#include <stdio.h>
int main (){
    int S,i,j,indL,indC,n,parcial;
    int M [100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&M[i][j]);
        }
    }

for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

    indL=0;
    indC = 0;
    S = M[0][0]+M[0][1]+M[1][0]+M[1][1];
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            parcial = M[i][j]+M[i][j+1]+M[i+1][j]+M[i+1][j+1];
            if(parcial<S){
                S = parcial;
                indL=i;
                indC=j;
            }
        }
    }

printf("%d %d %d",indL,indC,S);



    return 0;
}