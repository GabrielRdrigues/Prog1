#include <stdio.h>

void converte(char S[]){

    int i;
    for(i=0;S[i]!='\0';i++){
        if(S[i]<='Z' && S[i]>='A'){
            S[i]= 'a' + (S[i]-'A');
        }
    }
}

int conta(char S[]){
    int i;
    int cont;
    for(i=0;S[i]!='\0';i++){
       cont++;
    }
    return cont;
}


int main(){
    char S[100];
    int isPalindrome = 1; // Assumindo que já é um palíndromo (inicialmente)
    int i,j,cont;
    
    scanf("%[^\n]",S);

    converte(S);
    cont = conta(S) ;
    printf("%s",S);
    printf("%d",cont);
    j= cont -1;
    i=0;
    
    while(i<j){
        if(i<cont && S[i]== ' '){
            i++;
        }
        if(j>=0 && S[j]== ' '){
            j--;
        }

        if(i<j && S[i]!=S[j]){
            isPalindrome=0;
            i = j+1;
        }
        i++;
        j--;
    }

    if(isPalindrome==1){
        printf("eh um palindromo");
    }

}





/* int isPalindrome = 1; // Assumimos que é um palíndromo por padrão

    while (i < j) {
        // Ignorar caracteres não alfabéticos (não letras)
        if (i < strlen(S) && S[i] == ' ') {
            i++;
        }
        if (j >= 0 && S[j] == ' ') {
            j--;
        }

        if (i < j && tolower(S[i]) != tolower(S[j])) {
            isPalindrome = 0; // Não é um palíndromo
            break;
        }
        i++;
        j--;
    } */

