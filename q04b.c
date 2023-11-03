#include <stdio.h>

int main()
{
    int n,a,r,s,t;
    printf("Digite 'n' depois 'a' e depois 'r' ");
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&r);
    t = a + ((n-1)*r);
    s = (n*(a+t))/2;
    printf("%d",s);
    return 0;
}