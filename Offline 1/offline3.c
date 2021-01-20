#include<stdio.h>

int main()
{
    int i,j,n,min,max=0;
    printf("Enter the number of histograms: ");
    scanf("%d",&n);
    int h[n],area=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
    }
    for(i=0;i<n;i++)
    {
        min=h[i];
        for(j=i+1;j<n;j++)
        {
            min=min<h[j]?min:h[j];
            area=min*(j-i+1);
            if(area>max)
            {
                max=area;
            }
        }
    }
    printf("%d",max);

}
