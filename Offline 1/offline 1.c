#include<stdio.h>
int day_test(int d,int m,int y)
{
    int h;
    int r;
    if(m==1)
    {
        m=13;
        y=y-1;
    }
    if(m==2)
    {
        m=14;
        y=y-1;
    }

    h=(d+(int)(2.6*(m+1.0))+y+(int)(y/4.0)+6*(int)(y/100.0)+(int)(y/400.0));
    h=h%7;
    return h;
}


main()
{
    int d,m,y,r;
    printf("please enter date:");
    scanf("%d",&d);
    printf("please enter month(1-12):");
    scanf("%d",&m);
    printf("please enter year:");
    scanf("%d",&y);
    r=day_test(d,m,y);
    switch(r)
    {
    case 0:
        printf("saturday");
        break;
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thurseday");
        break;
    case 6:
        printf("friday");
        break;
    }

    return 0;
}
