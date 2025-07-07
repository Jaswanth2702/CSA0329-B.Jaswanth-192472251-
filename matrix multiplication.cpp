#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];
    int i, j, k;

     printf("Enter elements of Matrix A (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

     printf("\nEnter elements of Matrix B (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

     for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = 0;  
            for(k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

     printf("\nResultant Matrix C (A x B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

