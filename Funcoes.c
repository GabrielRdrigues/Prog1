#include<stdio.h>

int ehDigito(char c){

    if(c >= '0' && c <= '9'){
        return 1;
    }else{
        return 0;
    }
}

int ehLetra(char c){


}

int ehDigitoOuLetra(char c){
    //retorna verdadeiro

    //devemos usar ehDigito E ehLetra
}

int strtam(char S[]){
    int tam=0;

    while(S[tam] != '\0'){
        tam++;
    }
    return tam;
}


void lerLinhaInteira(char texto[]){
    char c='@'; //algo diferente de '\n'
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





int main(){
    char c;
    char S[101];

    printf("Digite uma string:\n");
    //scanf("%s",S);
    lerLinhaInteira(S);
    printf("%s possui %d caracteres\n",S,strtam(S));
    return 0;
}