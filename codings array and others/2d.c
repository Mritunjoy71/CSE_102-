
#include<stdio.h>
int a[100][100];

int main() {

    int n;
    scanf("%d", &n);

    int i, j;

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int flag = 1;
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i][j]!=0) flag = 0;
        }

    }

    for(i=0; i<n; i++) {
        for(j=0; j<=i; j++) {
            if(a[i][j]==0) flag = 0;
        }
    }

    printf("%s\n", flag ? "YES" : "NO");





    return 0;
}




