#include<stdio.h>

int main() {
    int i, j, r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int X[r][c], Y[r][c], Z[r][c];

    printf("Enter first matrix (separate by space): ");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            scanf("%d", &X[i][j]);
        }
    }

    printf("Enter second matrix (separate by space): ");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            scanf("%d", &Y[i][j]);
        }
    }

    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
             // adding element by element
            Z[i][j] = X[i][j] + Y[i][j]; // addition
            //Z[i][j] = X[i][j] - Y[i][j]; //  subtraction
            //Z[i][j] = X[i][j] * Y[i][j]; // multiplication - right or wrong?
        }
    }

    printf("The resulting summation matrix: \n");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            printf("%d ", Z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
