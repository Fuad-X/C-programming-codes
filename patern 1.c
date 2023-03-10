#include <stdio.h>

int main(){
    int A, i, n =1, c, j, s = 0;
    scanf("%d", &A);
    for(i = 1; i <= A*2; i++){
        if(i<=A) c =n++;
        else c = --n;
        if(i<=A)
            for(j = 0; j < c; j++){
            printf("*");
        }
        else{
            s++;
            for(j = 0; j < s; j++)
                printf(" ");
            for(j = 0; j < c; j++)
                printf("*");
        }
        printf("\n");
        }
}