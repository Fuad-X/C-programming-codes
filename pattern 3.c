#include <stdio.h>

int main(){
    int A, i, x, z,j;
    scanf("%d", &A);
    x = -1; z = A;
    for(i=0;i<A;i++){
        x++;z--;
        for(j=0;j<x;j++)printf("#");
        printf("$");
        for(j=0;j<z;j++)printf("@");
        printf("\n");
        }
}