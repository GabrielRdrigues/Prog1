#include <stdio.h>

void lerTexto(char texto[]){
    char c='@';
    int tam=0;

    while(c!='\n'){
        scanf("%c",&c);
        if(c=='\n'){
            texto[tam]='\0';
        }else{
            texto[tam]=c;
            tam++;
        }
    }
}

int contaLetras(char texto[]){
    int i,cont=0;
    for(i=0;texto[i]!='\0';i++){
        if(texto[i]!=' '){
            cont++;
        }
    }
    return cont;
}

int main (){
    char texto[500];
    lerTexto(texto);
    printf("%s\n",texto);
    printf("%d",contaLetras(texto));
}