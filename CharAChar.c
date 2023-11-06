#include <stdio.h>

int main(){

    // char S;

    /*while(scanf("%c",&S) == 1 ){
        
         printf("%c",S);
    
    }*/
    
    char nome1[20], nome2[20],naoimporta[20];
    int i=0,cont=0;
    char c;

    //while(scanf("%s",nome)==1)
    
        scanf("%[aeiou]",nome1);
        printf("%s\n",nome1);
        scanf("%[^aeiou]",naoimporta);
        scanf("%[aeiou]",nome2);
        printf("%s\n",nome2);
    
    //printf("tam = %d\n",(int)strlen(nome));
        /*scanf("%[^;]",nome1);
        printf("%s\n",nome1);
        scanf("%c",&c);
        printf("%c\n",c);
        scanf("%c",&c);
        printf("%c\n",c);
        scanf("%d",&cont);
        printf("%d\n",cont);*/

}