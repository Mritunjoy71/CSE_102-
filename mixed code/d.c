#include<stdio.h>
int main()
{
    struct marks
    {
        int sub[3];
        int total;
    };

    struct marks student [3]={24,67,45,0,56,87,43,0,88,67,54,0};
    struct marks total;
    int i,j;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            student[i].total+=student[i].sub[j];
            total.sub[j]+=student[i].sub[j];
        }
        total.total+=student[i].total;

    }
    printf("student total\n\n");
    for(i=0;i<=2;i++)
    {
        printf("student[%d]     %d\n",i+1,student[i].total);

    }
    printf("\n subject      total\n\n");
    for(j=0;j<=2;j++)
    {
        printf("subject[%d]     %d\n",j+1,total.sub[j]);
    }

    printf("grand total   =   %d",total.total);





}
