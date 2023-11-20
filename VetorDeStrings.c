/*#include <stdio.h>

int main(){
    int n,i;
    char VetorChar[3][10];

    scanf("%d",&n);

    /*for(i=0;i<n;i++){
       scanf("%s",VetorString[i]); 
    }

    for(i=0;i<n;i++){
       printf("%s",VetorString[i]);
    }

}*/

#include <stdio.h>


void copia (char dest[][500],int i,int j){
   int w;
   char aux[200][500];
   for(w=0;dest[i][w]!='\0';i++){
      aux[0][w]= dest[i][w];
      dest[i][w]=dest[j][w];
      dest[j][w]=aux[0][w];
   }
      dest[i][w]='\0';
      dest[j][w]='\0';
}


void strMaior (char V[][500],int n){
   int k,i,j;

   for(i=1;i<n;i++){
      for(j=i+1;j<=n;j++){
         for(k=0;V[i][k]!='\0'&& V[j][k]!='\0';k++){
            if(V[i][k]!=V[j][k]){
               if(V[i][k]>V[j][k]){
                  copia(V,i,j);
               }
            }
         }
         if(V[i][k]!='\0'){
            copia(V,i,j);
         }
      }
    }
   

}


int main() {

  int n, i, j, maior, cont = 0;
  char matriz[200][500]; 
  char s,c;

  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    c='@';
    for(j=0;c!='\n';j++){
        scanf("%c", &c);
        if(c=='\n'){
            matriz[i][j]='\0';
        }else{
            matriz[i][j]=c;
        }
    }
  }

    strMaior(matriz,n);
    
 
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int n;

//     printf("Digite o número de strings: ");
//     scanf("%d", &n);

//     char vetorDeStrings[100][100];

//     for (int i = 0; i < n; i++) {
//         printf("Digite a string %d: ", i + 1);
//         scanf("%s", vetorDeStrings[i]);
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (strcmp(vetorDeStrings[i], vetorDeStrings[j]) > 0) {
//                 char temp[100];
//                 strcpy(temp, vetorDeStrings[i]);
//                 strcpy(vetorDeStrings[i], vetorDeStrings[j]);
//                 strcpy(vetorDeStrings[j], temp);
//             }
//         }
//     }

//     printf("Vetor de strings ordenado lexicograficamente:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%s\n", vetorDeStrings[i]);
//     }

//     return 0;
// }