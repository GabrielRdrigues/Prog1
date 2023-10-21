// Matriz Transposta

#include <stdio.h>

int main()
{
    int A[10][10],M[10][10],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            M[i][j]=A[j][i];
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }


    return 0;
}
