#include <stdio.h>

int main(){

    char S[100];
    int cont[26];
    int i;
    int aux;
    printf("Informe a String:\n");
    scanf(" %[^\n]",S); //Ignora os espaços antes do nome
    // scanf("%s",S); so vai escanear até um espaço apos começar a escrever
    printf("%s\n",S);

    for(i=0;i<26;i++){
        cont[i] = 0;
    }


    for(i=0;S[i]!='\0';i++){
        if(S[i]<='Z' && S[i]>='A'){
            S[i]= 'a' + (S[i]-'A');
        }
        
    }

    for(i=0;S[i]!='\0';i++){
        aux = S[i] - 'a';
        cont[aux] = cont[aux] + 1;
    }
    
     for(i=0;i<26;i++){
        
        printf("%c :",'a'+i);
        printf("%d\n",cont[i]);
    }

}