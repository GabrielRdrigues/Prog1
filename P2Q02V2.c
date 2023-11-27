#include <stdio.h>
int main(){
    int n,cont=0;
    char c='@';
    scanf("%d",&n); // A leitura deve ser na mesma linha, isto é 2boa sorte
    while(c!='\n'){ // já que se você pular linha irá ferrar o código, caso queira pular linha colocar scanf("%d\n",&n);
        scanf("%c",&c);
        if(c!='\n'){
            cont++;
        }
    }
    printf("%d",(cont-(n-1)));
}