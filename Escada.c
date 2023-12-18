#include<stdio.h>
#include<stdlib.h>

int main(){

    int M[505][505];
    int n,m,i,j,ult=-1,esc=1;

    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&M[i][j]);

    i=0;
    while( i<n && esc ){
        j=0;
        while( j<m && M[i][j] == 0){
            j++;
        }
        if( j<m && j<=ult)
            esc=0;
        else{
            ult=j;
            i+=1;
        }
    }
    if(esc)
        printf("S\n");
    else
        printf("N\n");



return 0;
}