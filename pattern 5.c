#include <stdio.h>

int main(){
    int A, i, n = -1, x, j;
    scanf("%d", &A);
    x = (A/2)+1;
    for(i=0;i<A;i++){           
        if(i<=(A/2)){
        n+=2;
        x--;
        }
        else{
        n-=2;
        x++;
        }
        for(j=0;j<x;j++) printf(" ");
        for(j=0;j<n;j++) printf("*");
        for(j=0;j<x;j++) printf(" ");
        for(j=0;j<x;j++) printf(" ");
        for(j=0;j<n;j++) printf("*");
        printf("\n");
        }
        
    
    return 0;
}