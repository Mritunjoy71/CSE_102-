#include<stdio.h>
int main()
{
    int r=3,c=3,a[3][3],t[3][3],i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter element %d %d\t",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
     for(j=0;j<r;j++){
        for(i=0;i<c;i++){

            t[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",t[i][j]);
            if(j==(r-1))
            printf("\n\n");
        }


    }

    return 0;
}
