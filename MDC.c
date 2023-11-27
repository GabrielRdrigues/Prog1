#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int MDC(int a, int b) {
  a = abs(a);
  b = abs(b);

  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }
  return a;
}

int MMC(int a, int b) {
  int i, cont=1;
  for (i = 2; a != 1 || b != 1; i++) {
    if (a % i == 0 || b % i == 0) {
      if (a % i == 0) {
        a = a / i;
      }                                
      if (b % i == 0) {                
        b = b / i;
      }
      cont = cont * i;
      i = 1;
    }
  }
  return cont;
}

int main() {

  int valora, valorb;
  int resultado, select;
  printf("Digite 1 para MDC e 2 para MMC\n");
  scanf("%d", &select);
  printf("Escreva os numeros a: b: \n");
  scanf("%d %d", &valora, &valorb);
  if (select == 1) {
    resultado = MDC(valora, valorb);
    printf("%d", resultado);
  }
  if (select == 2) {
    resultado = MMC(valora, valorb);
    printf("%d\n", resultado);
  }

  return 0;
}
