#include <stdio.h>
 
int main() {
    int n,x,dig,dig2,y;
    int i;
    i = 1;
    printf("Digite N: ");
    scanf("%d",&n);
    x = n;
    dig2=0;
    while(x>=1){
        i = i * 10;
        dig = n%i;
        y =(dig - dig2)/(i/10);
        // if(i/10==1){
            //printf("%d unidade\n",y)}
        //else{
            //if(i/10==2){
            //printf("%d centena",y);
            //}}
        printf("%d\n",y); 
        x= n/i;
        dig2 = dig; 
    }

    return 0;
}