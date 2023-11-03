#include <stdio.h>
// Q01 Lista String
int main(void) {
  int i, aux = 1;
  char str1[21];
  char str2[21];
  scanf("%s", &str1);
  scanf("%s", &str2);
  // printf("%s \n", str1);
  // printf("%s", str2);

  for (i = 0; i < 21; i++) {
    if (str1[i] != str2[i]) {
      if (str1[i] > str2[i]) {
        printf("A string: %s é menor\n", str2);
        printf("%c\n", str1[i]);
        printf("%c\n", str2[i]);
        aux = 0;
        i = 22;
      } else {
        printf("A string: %s é menor\n", str1);
        printf("%c\n", str1[i]);
        printf("%c\n", str2[i]);
        aux = 0;
        i = 22;
      }
    }
  }
  if (aux == 1) {
    printf("engual\n");
  }

  return 0;
}