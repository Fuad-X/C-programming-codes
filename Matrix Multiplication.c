#include <stdio.h>

int main()
{
    int i,j,p,q,k,m,n;
    printf("Enter the dimensions of matrix A[p][q]\n");
    printf("Enter the value of p : ");
    scanf("%d", &p);
    printf("Enter the value of q : ");
    scanf("%d", &q);
    int A[p][q];

    for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("Enter the value of A[%d][%d] : ", i+1, j+1);
                scanf("%d", &A[i][j]);
            }
            printf("\n");
        }

    printf("Enter the dimensions of matrix B[m][n]\n");
    printf("Enter the value of m : ");
    scanf("%d", &m);
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int B[m][n];

    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("Enter the value of B[%d][%d] : ", i+1, j+1);
                scanf("%d", &B[i][j]);
            }
            printf("\n");
        }

    if(q!=m) printf("Matrix multiplication is not possible");
    else{
        int X[p][n];
        for(i=0;i<p;i++){
            for(j=0;j<n;j++){
                X[i][j]=0;
            }
            printf("\n");
        }
        for(i=0;i<p;i++){
            for(k=0;k<n;k++){
                for(j=0;j<q;j++){
                    X[i][k] = X[i][k] + (A[i][j]*B[j][k]);

                }
            }
        }

        for(i=0;i<p;i++){
            for(j=0;j<n;j++){
                printf("%d  ", X[i][j]);
            }
            printf("\n\n");
        }
    }
    getch();

    return 0;
}
