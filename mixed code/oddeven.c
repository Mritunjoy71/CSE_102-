#include<stdio.h>
int main()
{
    int n,i;
    char num[101];
    scanf("%d",&n);
    int count=0;
    for(i=0;i<n;i++)
    {
        {
             scanf("%s",&num);
             count++;
        }
        while(count==n)
        {
            if(num%2==0)
                printf("even");
            else
                printf("odd");
        }

    }
    return 0;
}
