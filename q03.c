#include <stdio.h>

int main()
{
    int n,i = 0;
    printf("Digite N: \n");
    scanf("%d",&n);
    while(n>1){
        if(n%2==0){
            n = n/2;
        }else{
            n = (3*n) + 1;
        }
        i++;
    }
    printf("%d",i);
    return 0;
}
