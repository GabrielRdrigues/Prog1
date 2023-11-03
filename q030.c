// Mediana

#include <stdio.h>

int main()
{
    int n,i,j,ind,troca;
    int mediana;
    int V[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&V[i]);
    }
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(V[j]>V[j+1]){
                troca = V[j];
                V[j]=V[j+1];
                V[j+1]=troca;
            }
        }
    }
    if(n%2==0){
        ind=n/2;
        mediana=(V[ind]+V[ind-1])/2;
    }else{
        ind=n/2;
        mediana=V[ind];
    }
    printf("%f",mediana);




    return 0;

}
   
