#include <stdio.h>
 
int main() {
    
    float peca1_valor,peca2_valor,valor;
    int peca1_codigo,peca1_numero,peca2_codigo,peca2_numero;
    scanf("%d %d %f",&peca1_codigo,&peca1_numero,&peca1_valor);
    scanf("%d %d %f",&peca2_codigo,&peca2_numero,&peca2_valor);
    valor = (peca1_numero * peca1_valor) + (peca2_numero * peca2_valor);
    printf("VALOR A PAGAR: R$ %.2f\n",valor);

    return 0;
}