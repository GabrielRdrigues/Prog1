// Matriz ao quadrado

#include <stdio.h>

int main()
{
    int A[10][10],B[10][10],C[10][10],n,i,k,j;
    scanf("%d",&n);

    // Leitura das matrizes
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
  
    // Fim da leitura das matrizes
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            C[i][j]=0;
            for(k=0;k<n;k++){
                C[i][j]=C[i][j]+ (A[i][k]*A[k][j]);
            }
        }
    }



    // Imprimir a resultante
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

   


    return 0;

}
   
