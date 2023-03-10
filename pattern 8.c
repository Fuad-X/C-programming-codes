#include <stdio.h>

int main(){
    int A,i,j,n,s;
    scanf("%d", &A);
    n = -1;
    s = A;
    for(i=0;i<A;i++){
        n++;
        s--;
            for(j=0;j<A;j++){
                if(j==s && s==n) printf("?");
                else if(j==s || j==n) printf("@");
                else printf(" ");
            }
        printf("\n");
        }
    
    return 0;
}