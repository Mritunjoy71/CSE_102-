#include<stdio.h>

int main() {
    int i, j, k, r1, c1, r2, c2, sum;

    printf("Enter number of rows for first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns for the first matrix: ");
    scanf("%d", &c1);

     printf("Enter number of rows for second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns for the second matrix: ");
    scanf("%d", &c2);

    if ( c1 != r2) {
        printf("Invalid Dimension\n");
        return 0;
    }

    int X[r1][c1], Y[r2][c2], Z[r1][c2];

    printf("Enter first matrix (separate by space): ");
    for ( i =0 ; i< r1; i++ ) {
        for ( j = 0; j < c1; j++ ) {
            scanf("%d", &X[i][j]);
        }
    }

    printf("Enter second matrix (separate by space): ");
    for ( i =0 ; i< r2; i++ ) {
        for ( j = 0; j < c2; j++ ) {
            scanf("%d", &Y[i][j]);
        }
    }

    for ( i =0 ; i< r1; i++ ) {
        for ( j = 0; j < c2; j++ ) {
            sum = 0;
            for ( k = 0; k < r2; k++ ) {
                sum += X[i][k] * Y[k][j];
            }
            Z[i][j] = sum;
        }
    }

    printf("The resulting summation matrix: \n");
    for ( i =0 ; i< r1; i++ ) {
        for ( j = 0; j < c2; j++ ) {
            printf("%d ", Z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
