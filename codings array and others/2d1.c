#include<stdio.h>
#define row 10
#define col 10
void read( int mat[row][col],int r,int c)
{
    int i,j;
    for(i=0;i<r;++i){
            for(j=0;j<c;++j)
            scanf("%d",&mat[i][j]);
    }
}

int main()
{
    int mat[row][col];
    int i,j,r,c ;
    printf("enter row ");
    scanf("%d",&r);
    printf("enter col ");
    scanf("%d",&c);
    read(mat,r,c);
    for(i=0;i<r;++i){
        for(j=0;j<c;++j)
        {
            mat[i][j]=mat[j][i];
        }
    }
    int rev[c][r];



    for(i=0;i<c;i++){


        for(j=0;j<r;++j)
        {
             rev[i][j]=mat[i][r-1-j];
    }

        }


    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
           printf("%d\t",rev[i][j]);
           if(j==(r-1)){
                printf("\n");
           }
        }
    }


    return 0;
}





















