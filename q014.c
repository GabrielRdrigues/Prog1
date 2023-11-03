#include <stdio.h>

int main() {
    int A,B,C,D,i;
    int aux =0;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    i=A;
    while(aux==0 && i<=C){
        if(i%B!=0 && C%i==0 && D%i!=0){
            printf("%d\n",i);
            aux=1;
            
        }
        i++;
        
    }
    
    if(i>C){
        printf("-1\n");
    }

    return 0;

}

