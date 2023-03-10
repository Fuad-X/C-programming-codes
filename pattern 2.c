#include <stdio.h>

int main(){
    int A, i, n = -1, j, k,x;
    scanf("%d", &A);
    x = A;
    for(i=1; i<A*2; i++){
        if(i<=A){
        n+=2;
        x--;
        }
        else{
        n-=2;
        x++;
        }
        for(k=0;k<x;k++)printf(" ");
        for(j=0;j<n;j++)printf("*");
            printf("\n");
        }
}