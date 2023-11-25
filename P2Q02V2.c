#include <stdio.h>
int main(){
    int n,cont=0;
    char c='@';
    scanf("%d",&n);
    while(c!='\n'){
        scanf("%c",&c);
        if(c!='\n'){
            cont++;
        }
    }
    printf("%d",(cont-(n-1)));
}