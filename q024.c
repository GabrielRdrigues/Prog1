#include <stdio.h>

int main()
{
    int n,i,A[1000],B[1000];
    int V[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        scanf("%d",&B[i]);
    }

    for(i=0;i<n;i++){
            V[i*2+1]= B[i];
            V[i*2] = A[i];
        }

for(i=0;i<n*2;i++){
    printf("%d\n",V[i]);
}
    

    return 0;
}
