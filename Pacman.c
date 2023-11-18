#include <stdio.h>

int main() {

  int n, i, j, maior, cont = 0;
  char matriz[200][200]; // 200 Strings (vetores de char) de 200 posições (tamanho 200 char V[200])
  char s;

  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    scanf("%s", matriz[i]);
  }
  //scanf("%c",&s); // DUVIDA
  //for(i=1;i<=n;i++){
   // scanf("%25[^\n]",matriz[i]);
   // scanf("%c",&s);
 // }

  maior = 0;

  for (i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      for (j = 0; j < n; j++) {
        if (matriz[i][j] == 'A') {

          cont = 0;
        }
        if (matriz[i][j] == 'o') {
          cont++;
        }
        if (cont > maior) {
          maior = cont;
        }
      }
      // scanf("%[^\n]", s);

    } else {
      for (j = n - 1; j >= 0; j--) {
        if (matriz[i][j] == 'A') {
          cont = 0;
        }
        if (matriz[i][j] == 'o') {
          cont++;
        }
        if (cont > maior) {
          maior = cont;
        }
      }
      // scanf("%[^\n]", s);
    }
  }
  printf("%d\n", maior);
}