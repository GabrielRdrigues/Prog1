#include <stdio.h>
 
int main() {
 
    int A,B,C,MaiorAB,MaiorABC;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    MaiorAB = (A+B+abs(A-B))/2;
    MaiorABC = (MaiorAB+C+abs(MaiorAB-C))/2;
    printf("%d eh o maior\n",MaiorABC);

    return 0;
}