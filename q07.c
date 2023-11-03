#include <stdio.h>
 
int main() {
 
    int i,j,n,x,aux,a,b;
    printf("Escreva N: ");
    scanf("%d",&n);
    x = 0;
    aux = 0;
    while(aux==0){
        a = 1;
        b = 1;
        for(i=0;i<2;i++){
            a = a * x;
        }
        for(j=0;j<2;j++){
            b = b * (x+1);
        }
        if((n>= a) && (n<b)){
            aux = 1;
        }else{
            x = x + 1;
        }
    }
    printf("%d",x);

    return 0;
}