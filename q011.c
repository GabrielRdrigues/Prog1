#include <stdio.h>
// 3!+3!+3!+3!+1! = 25
// 4! + 1! = 25
int main() {
    int N,K,soma,i,fat,X;

    scanf("%d",&N);

    soma = 0;

    fat=1;

    while(soma!=N && soma<N){

        X=N;

        for(i=1;i<=X-1;i++){
            fat = fat * i;
        }

        if(fat>=N){

        }else{
            soma = soma + fat;
            K++;
        }

        if(X<=0){
            X=N;
        }else{
           X--; 
        }
       
    }
   printf("%d\n",K);
    return 0;
}