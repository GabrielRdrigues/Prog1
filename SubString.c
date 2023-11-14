#include <stdio.h>

int strTam (char V[]){
    int i,cont=0;
    for(i=0;V[i]!='\0';i++){
        cont++;
    }
    return cont;
}

int search(char V[],char W[],int indice,int tamanhoT,int tamanhoP){
    int i,j=0;;
    
    for(i=indice;j<tamanhoP ;i++){
        if(V[i]==W[j]){
        }else{
            return 0;
        }
        j++;
    }
    if(j==tamanhoP){
        return 1;
    }
    return 0;
}

int resultado (int result){
    if(result==1){
        printf("eh substring");
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int naoeh=0;
    char P[100],T[100];
    int i,result,tamanhoT,tamanhoP;

    scanf("%s",T);
    scanf("%s",P);
    tamanhoT=strTam(T);
    tamanhoP=strTam(P);

    for(i=0;i<=tamanhoT-tamanhoP;i++){
        if(T[i]==P[0]){
            result= search(T,P,i,tamanhoT,tamanhoP);
            if(resultado(result)==1){
                i=tamanhoT+tamanhoP;
                naoeh=1;
            }
        }
    }
    if(naoeh==0){
        printf("nao eh substring ok");
    }

    return 0;
}

