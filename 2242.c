#include <stdio.h>
#include <string.h>

int strTam(char V[]) {
  int i, cont = 0;
  for (i = 0; V[i] != '\0'; i++) {
    cont++;
  }
  return cont;
}

void engracade(char risada[]) {
  int i = 0, j,cont;
  int isEngracade = 1;
  cont = strlen(risada) - 1;
  j= cont;

  while (i < j) {
    if (i<cont && ( risada[i] != 'a' && risada[i] != 'e' && risada[i] != 'i' && risada[i] != 'o' && risada[i] != 'u')) {
      i++;
    }
    if (j>=0 && (risada[j] != 'a' && risada[j] != 'e' && risada[j] != 'i' && risada[j] != 'o' && risada[j] != 'u')) {
      j--;
    }
    if (risada[i] != risada[j]) {
      isEngracade = 0;
      i = j + 5;
    }
    i++;
    j--;
  }
  if (isEngracade==1) {
    printf("S\n");
  }else{
    printf("N\n");
  }
}

int main() {
  char risada[60];

  scanf("%s",risada);
  engracade(risada);

  return 0;
}
