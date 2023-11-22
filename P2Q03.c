#include <stdio.h>

void frequencia(int V[],char S[],int N){
    int i,aux=0;
   

     for(i=0;i<N;i++){
        V[i]=0;
    }

    for(i=0;i<N;i++){
        aux = S[i]-'A';
        V[aux]++;
    }

     for(i=0;i<26;i++){
        printf("%c %d\n",'A'+i,V[i]);
    }

}

int main(){
    char S[100000];
    int V[26];
    int N,i=0;
    scanf("%d\n",&N);
    while(i<N){
        scanf("%c",&S[i]);
        i++;
    }
    S[i]='\0';
    frequencia(V,S,N);

    return 0;
}