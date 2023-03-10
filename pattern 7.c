#include <stdio.h>

int main(){
    int A, i,n,j,s;
    scanf("%d", &A);
    n = (A/2)-2;
    s = (A/2)+2;
    for(i=0;i<A;i++){
        if(i<=A/2){
        n++;
        s--;
        }
        else{
        n--;
        s++;
        }
        for(j=0;j<A;j++){
            if((i==0) || (i==(A-1)) || (j==0) || (j==(A-1))) printf("@");
            else if((j==n) || (j==s)) printf(" ");
            else printf("@");
            }
        printf("\n");
        }
    
    return 0;
}