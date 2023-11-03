#include <stdio.h>

int main()
{
    int n,i,j,k,A[1000],B[1000];
    int V[2000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
        scanf("%d",&B[i]);
    }
    j = 1;
    k = 1;
    for(i=1;i<=n*2;i++){
        if(i%2!=0){
            printf("V[%d] = A[%d] = %d\n",i,j,A[j]);
            V[i]= A[j];
            j++;
        }else{
            printf("V[%d] = B[%d] = %d\n",i,k,B[k]);
            V[i]=B[k];
            k++;
        }
    }
for(i=1;i<=n*2;i++){
    printf("%d\n",V[i]);
}
    

    return 0;
}
