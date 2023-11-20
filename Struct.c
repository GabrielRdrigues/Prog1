#include <stdio.h>

typedef struct aluno{
    char nome[21];
    float P1,P2,media,VS;
}aluno;

int Ler (aluno vetor[]){

    int i,n;
    printf("Por favor digite a Qtd de alunos: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Informe o nome do aluno:\n ");
        scanf("%s",vetor[i].nome);
        printf("Informe a P1 e P2 do aluno %s:\n ",vetor[i].nome);
        scanf("%f %f",&vetor[i].P1,&vetor[i].P2);
    }
    return n;
}

void MediaIndividual(aluno vetor[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("O aluno %s tem P1: %f e P2: %f \n",vetor[i].nome, vetor[i].P1, vetor[i].P2);
        vetor[i].media = (vetor[i].P1+vetor[i].P2)/2;
        printf("Sua media eh %f: \n",vetor[i].media);
        if(vetor[i].media>=4 && vetor[i].media<6){
            printf("Informe a VS de %s: \n",vetor[i].nome);
            scanf("%f",&vetor[i].VS);
            vetor[i].media=vetor[i].VS;
            printf("Sua nova media eh %f",vetor[i].media);
        }
    }
}

float MediaTurma(aluno vetor[],int n){
    int i;
    float media=0,aux;
    for(i=0;i<n;i++){
        media = media + vetor[i].media;
    }
    aux = media/n;
    return aux;
}

void ordenacao(aluno vetor[],int n){
    int maior=0;
    int i=0,j=0;
    aluno aux;
    for(i=0;i<n-1;i++){
        maior=i;
        for(j=i+1;j<n;j++){
            if(vetor[j].media>vetor[maior].media){
                maior = j;
            }
        }
        aux = vetor[i];
        vetor[i]=vetor[maior];
        vetor[maior]=aux;
    }
}

void Imprimir(aluno vetor[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("O alune %s media: %f\n",vetor[i].nome,vetor[i].media);
    }
}

int main(){
    aluno vetor[50];
    int n;
    float mediaGeral;
    n=Ler(vetor);
    MediaIndividual(vetor,n);
    mediaGeral=MediaTurma(vetor,n);
    printf(" Media geral: %.2f\n",mediaGeral);
    ordenacao(vetor,n);
    Imprimir(vetor,n);
    

    return 0;
}