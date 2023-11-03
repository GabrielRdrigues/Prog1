#include <stdio.h>
 
int main() {
    int A,B,C;
    scanf("%d %d",&A,&B);
    if(A==B){
        C=A;
    }else{
        if(A>B){
            C=A;
        }else{
            C=B;
        }
    }
    printf("%d",C);

    return 0;
}