#include <stdio.h>

int main(){
    char c='@';
    int i;
    while(c!='\n'){
        scanf("%c",&c);
        if(c==' '){
            printf("%c",c);
        }
        if(c=='p'){
            scanf("%c",&c);
            printf("%c",c);
        }
    }
    printf("\n");
}
