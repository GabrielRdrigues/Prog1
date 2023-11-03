#include <stdio.h>

int main()
{
    int n,a,r,s,t;
    printf("Digite 'n' depois 'a' e depois 'r' ");
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&r);
    t = a;
    s = a;
    for(int i=2;i<=n;i++){
        t = t + r;
        s = s + t;
    }
    printf("%d",s);
    return 0;
}