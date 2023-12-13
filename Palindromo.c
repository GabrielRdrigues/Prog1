#include <stdio.h>

int main(){

    char S[100];
    int i=0,j=0,aux=0;
    int cont=0;

    scanf(" %[^\n]",S); // Existe alguma forma que eu possa ler uma string ex Rio Das Ostras | riodasostras

    // Vendo o tamanho da string

    for(i=0;S[i]!='\0';i++){
       cont++;
    }

    // Convertendo maisculas para minusculas

     for(i=0;S[i]!='\0';i++){
       if(S[i]>='A'&&S[i]<='Z'){
        S[i]= 'a' + (S[i]-'A');
       }
    }

    //printf("%d",cont);
   // printf("%s",S);



    // Processamento 
    i=0;
    j=cont-1;

    if(cont%2==0){
        while(aux!=1){
            if(S[i]==S[j]){
                i++;
                j--;
                aux = j - i;
            }else{
                aux=-1;
            }
        }
    }else{
        while(j!=i){
            if(S[i]==S[j]){
                i++;
                j--;
                aux = j - i;
            }else{
                aux=-1;
            }
        }
    }

    // Fim processamento


    // Resultados é ou não é
    if(aux==1){
        printf("A palavra: %s eh um palindromo",S);
    }else{
        if(j==i){
        printf("A palavra: %s eh um palindromo",S);
    }else{
        printf("nao eh");
    }
    }
    


    return 0;
}