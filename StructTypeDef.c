#include<stdio.h>
/*
typedef struct pessoa{
    char nome[21];
    int idade;
}Pess;
*/

struct pessoa{
    char nome[21];
    int idade;
};
typedef struct pessoa Pess;

int main(){

    Pess A,B;

    printf("Digite nome A: ");
    scanf("%s",A.nome);
    printf("Digite idade A: ");
    scanf("%d",&A.idade);

    printf("nome A: %s\n",A.nome);
    printf("idade A: %d\n",A.idade);

return 0;
}



/*#include<stdio.h>

    struct pessoa{
        char nome[21];
        int idade;
    };

int main(){

    struct pessoa A,B;

    printf("Digite nome A: ");
    scanf("%s",A.nome);
    printf("Digite idade A: ");
    scanf("%d",&A.idade);

    printf("nome A: %s\n",A.nome);
    printf("idade A: %d\n",A.idade);

return 0;
}*/
