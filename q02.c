#include <stdio.h>

int main()
{
    int n,i,s;
    s = 0;
    printf("Digite n: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s = s + i;
    }
    printf("A soma eh: %d",s);
    return 0;
}
