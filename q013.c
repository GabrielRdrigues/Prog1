#include <stdio.h>

int main() {
    int A,B,C,D,N;
    scanf("%d %d %d %d",&A,&B,&C,&D);

    if(A%B!=0 && C%A==0 && D%A!=0){
        N = A*C;
        printf("%d",N);
    }else{
        printf("-1");
    }

    return 0;
}

