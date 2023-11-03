#include <stdio.h>

int main()
{
    int n,p;

    printf("Digite N: \n");
    scanf("%d",&n);
    for(int i = 2;i <= n-1;i++){
        if(n%i==0){
            p = 1;
        }
    }
    if(p==1){
        printf("Nao eh primo");
    }else{
        if(n==1){
            printf("n eh primo");
        }else{
            printf("eh primo");
            }
            
    }
    return 0;
}
