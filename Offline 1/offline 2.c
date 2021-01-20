#include<stdio.h>
int day_test(int d,int m,int y)
{
    int h;
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

    h=(d+(int)(2.6*(m+1))+y+(int)(y/4.0)+6*(int)(y/100.0)+(int)(y/400.0));
    h=h%7;
    return h;
}

main()

{
    int i,j,k,m,y,r,n,count=1;
    printf("please enter your desired month:");
    scanf("%d",&m);
    printf("please enter your desired year:");
    scanf("%d",&y);
    r=day_test(1,m,y);

    printf(" the calender of the month is:\n\n\n\n sat sun mon tue wed thu fri\n");

    for(j=0; j<1; j++)
    {

        for(i=0; i<r; i++)
            printf("    ");
        for(k=0; k<=6-r; k++)
        {
            printf("%4d",count);
            count++;
        }
        printf("\n");
    }
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        n=31;
    else if(m==2)
    {
        if(y%400==0) n=29;
        else if(y%100==0) n=28;
        else if(y%4==0) n=29;
        else n=28;
    }
    else n=30;

    for(i=0; i<5; i++)
    {
        for(j=0; j<7; j++)
        {
            if(count>n)
                break;
            else
                printf("%4d",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}
