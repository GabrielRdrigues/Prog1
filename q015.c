#include <stdio.h>

//2670 - Máquina de Café

int main() {
    int A1,A2,A3,menor;
    scanf("%d %d %d",&A1,&A2,&A3);
    menor = (A2 * 2) + (A3 * 4);
    if((A1*2) +(A3*2) < menor){
        menor = (A1*2) +(A3*2);
    }

    if((A1*4)+(A2*2) < menor){
        menor = (A1*4)+(A2*2);
    }
        
    
    printf("%d\n",menor);
    return 0;

}

