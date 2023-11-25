#include <stdio.h>

int main(){
    char cripto [26],mensagem[1000001];
    int aux;
    scanf("%s",cripto);
    scanf("%s",mensagem);
    //printf("%s",mensagem);
    //printf("%s",cripto);

    for(int i=0;mensagem[i]!='\0';i++){
        aux= mensagem[i]-'a';
        //printf("%c",cripto[aux]);
        mensagem[i]=cripto[aux];
    }

    printf("%s\n",mensagem);

}