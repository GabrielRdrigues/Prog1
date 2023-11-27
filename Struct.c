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

int MediaIndividual(aluno vetor[],int n){
    int i,cont=0;
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
        if(vetor[i].media>=6){
            cont++;
        }
    }
    return cont;
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

float mediana(aluno vetor[],int n){
    int aux;
    float mediane;
    
        if(n%2==0){
            aux = n/2;
            mediane = (vetor[aux].media+vetor[aux-1].media)/2;
            return mediane;
        }
        aux=n/2;
        mediane = vetor[aux].media;
        return mediane;
}


void Imprimir(aluno vetor[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("O alune %s media: %f\n",vetor[i].nome,vetor[i].media);
    }
}

void ordemAlpha(aluno vetor[],int n){
    int menor=0;
    int i=0,j=0,k;
    int aux =1;
    aluno auxiliar;
    for(i=0;i<n-1;i++){
        menor =i;
        for(j=i+1;j<n;j++){
            
            for (k = 0; k < 21; k++) {
                if (vetor[i].nome[k] != vetor[j].nome[k]) {
                    if (vetor[menor].nome[k] > vetor[j].nome[k]) {
                        aux = 0;
                        k = 22;
                        menor =j;
                }  else {
                        aux = 0;
                        k = 22;
                    }
                    }
        }

        
    }
    auxiliar = vetor[i];
    vetor[i]=vetor[menor];
    vetor[menor]=auxiliar;
}
}

int main(){
    aluno vetor[50];
    int n,Aprov;
    float mediaGeral;

    n=Ler(vetor); // Ler Alunos

    Aprov=MediaIndividual(vetor,n); // Media de cada aluno
    mediaGeral=MediaTurma(vetor,n); // media da Turma
    ordenacao(vetor,n); // Ordenar médias decrescente

    printf(" Media geral: %.2f\n",mediaGeral); // Imprimir Media da turma
    printf("Mediana eh: %f\n",mediana(vetor,n)); // Imprimir mediana das médias
    printf("Aprovados: %d Reprovados: %d\n",Aprov,n-Aprov); // Imprimir aprovados e reprovados
    printf("\n");
    printf("Ordenacao Decrescente");
    Imprimir(vetor,n); // Imprimir ordenação

    ordemAlpha(vetor,n);
    printf("\n");
    printf("Ordenacao Ordem Alfabetica \n");
    Imprimir(vetor,n);

    return 0;
}