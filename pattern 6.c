#include <stdio.h>

int main(){
    int A, i, s,j;
    scanf("%d", &A);
    s = A;
    for(i=1;i<=A;i++){
        s--;
        for(j=0;j<i;j++){
            if(i%2 == 0) printf("&");
            else printf("#");
            }
        for(j=0;j<s;j++) printf(" ");
        for(j=0;j<s;j++) printf(" ");
        for(j=0;j<i;j++){
            if(i%2 == 0) printf("#");
            else printf("&");
            }
        printf("\n");
        }
    
    return 0;
}