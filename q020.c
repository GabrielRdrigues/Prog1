// 1936 BeeCrowd - Fatorial
#include <stdio.h>
 
int main() {
 
    int i=0,n=0,x=0,k=0,r =0;
    int V[8] = {40320,5040,720,120,24,6,2,1};
    scanf("%d",&n);
    x = n;
    for(i=0;i<8;i++){
        k = k + (x/V[i]);
        r = x%V[i];
        x = r;
    }
    printf("%d\n",k);
 
    return 0;
}