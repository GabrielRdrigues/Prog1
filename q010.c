#include <stdio.h>
 
int main() {
    
   int valor,resto;

   scanf("%d",&valor);
   printf("%d\n",valor);
   resto = valor % 100;
   printf("%d nota(s) de R$ 100,00\n",valor / 100);
   printf("%d nota(s) de R$ 50,00\n",resto / 50);
   resto = resto % 50;
   printf("%d nota(s) de R$ 20,00\n", resto / 20);
   resto = resto % 20;
   printf("%d nota(s) de R$ 10,00\n", resto / 10);
   resto = resto % 10;
   printf("%d nota(s) de R$ 5,00\n", resto / 5);
   resto = resto % 5;
   printf("%d nota(s) de R$ 2,00\n", resto / 2);
   resto = resto % 2;
   printf("%d nota(s) de R$ 1,00\n", resto / 1);



    return 0;
}