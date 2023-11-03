#include <stdio.h>

int main (){
    int s,soma=0;
    int n=0;
    int p=0;
    int j=0;
    printf("Digite um numero inteiro");
    scanf("%d",&s);    
    n=2;

    while(soma<=s){
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                p=p+1;
                    }
                            }
       if(p==0){
        j++;
       soma = soma + n ;}
       n++;
       p=0;

    }
    if(soma>s){
        n=n-1;
        soma=soma-n;
        j=j-1;
            }
    printf("%d",j);

    return 0;
}