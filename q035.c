#include <stdio.h>

int main() {

    int i,x,j,k,l,cont;
    scanf("%d", &x);
    int V1[x],V2[x];

    for(i=0;i<x;i++){
        scanf("%d",&V1[i]);
    }
    for(i=0;i<x;i++){
        scanf("%d",&V2[i]);
    }
    cont=0;
//inicio

    for(i=0;i<=x - 1;i++){                                          //escolher um carro
        for(j=0;j<=x - 1;j++){                                      //achar o carro escolhido
            if(V1[i]==V2[j]){                                       //carro achado  
                for(k=0;k<=x - 1;k++){                              //escolher carro ultrapassado ou nao 
                    for(l=0;l<=x - 1;l++){                          //achar o carro ultrapassado ou nao 
                        if(V1[k]==V2[l]){                           //carro ultrapassado ou nao achado
                            if(k>i){                                //ver se um carro estava atras
                                if(l<j){                            //ver se um carro ultrapassou
                                    cont = cont + 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", cont);
    


return 0;
}