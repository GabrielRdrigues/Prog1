#include <stdio.h>
ERRADO
int main(){
/*
    int N=0,i=0,ult=0,troca=0,k=0,j=0,largada[2400],chegada[2400];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&largada[i]);
    }
    for(i=0;i<N;i++){
        scanf("%d",&chegada[i]);
    }
     for(i=N-1;i>0;i--){
         for(j=N-1;j>0;j--){
            if(largada[i]==chegada[j]){
                if(j<i){
                ult= ult + (i-j);
                troca = largada[i];
                for(k=i;k<j-1;k++){
                    largada[k]=largada[k-1];
                }
                largada[j]=troca;
                j =0;}
                
            }
    }
    }
    printf("%d",ult); 
*/
    int N=0,i=0,ult=0,aux,troca=0,k=0,j=0,largada[2400],chegada[2400];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&largada[i]);
    }
    for(i=0;i<N;i++){
        scanf("%d",&chegada[i]);
    }
    ult=0;
    for(i=0;i<N;i++){
        aux=0;
        j=0;
        while(aux==0){
            if(largada[i]==chegada[j]){
                if(j<i){
                    ult = ult + (j-1);
                }
                aux=1;
            }else{
                j++;
            }

        }
    }
    printf("%d",ult);


    return 0;
}