#include <stdio.h>
#include <string.h>


int Palindromo(char S[]){
    int isPalindrome = 1; // Assumindo que já é um palíndromo (inicialmente)
    int i,j,cont;
    cont = strlen(S);
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
        return 1;
    }
    return 0;
}

int main(){
    char risada[51],c='@';
    int resultado,i=0;
    while(c!='\n'){
        scanf("%c",&c);
        if(c=='\n'){
            risada[i]='\0';
        }
        if((c!='\n') && (c=='a' || c=='e' || c=='i' || c=='o'||c=='u') ){
            risada[i]=c;
            i++;
        }
    }

    resultado = Palindromo(risada);
    if(resultado){
        printf("S\n");
    }else{
        printf("N\n");
    }
    


}


