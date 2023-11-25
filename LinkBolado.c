#include <stdio.h>
#include <string.h>

int search(char V[],char W[],int indice,int tamanhoP){
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
        printf("Link Bolado\n");
        return 1;
    }else{
        return 0;
    }
}

void strMasc(char S[]){
    int i;

    for(i=0;S[i]!='\0';i++){
        if(S[i]<='Z' && S[i]>='A'){
            S[i]= 'a' + (S[i]-'A');
        }
    }
}


int main(){
    char T[100000];
    char P[6]={'z','e','l','d','a','\0'};
    int tamanhoT,tamanhoP,i,result,naoeh=0;
   

    scanf("%s",T);
    strMasc(T);
    tamanhoT = strlen(T);
    tamanhoP=5;

    for(i=0;i<=tamanhoT-tamanhoP;i++){
        if(T[i]==P[0]){
            result= search(T,P,i,tamanhoP);
            if(resultado(result)==1){
                i=tamanhoT+tamanhoP;
                naoeh=1;
            }
        }
    }
    if(naoeh==0){
        printf("Link Tranquilo\n");
    }

    return 0;
}


