#include <stdio.h>

int main(){
    int A, i, j, n,s;
    scanf("%d", &A);
    n = A+2;
    s = -1;
    for(i=0;i<A;i++){
        if(i<=A/2){
        n-=2;
        s++;
        }
        else{
        n+=2;
        s--;
        }
        for(j=0;j<s;j++) printf(" ");
        for(j=0;j<n;j++) printf("@");
        printf("\n");
        }
    return 0;
}