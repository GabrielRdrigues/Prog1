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


int main(){
    char c;

    scanf("%c",&c);
    if(ehDigito(c)){
        printf("%c eh digito\n",c);
    }else{
        printf("%c nao eh digito\n",c);
    }

return 0;
}