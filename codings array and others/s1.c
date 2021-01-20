#include<stdio.h>
int main()
{
    struct name *ptr,p;
    ptr=&p;
    printf("enter integer ");
    scanf("%d",&(*ptr).a);
    printf("enter number ");
    scanf("%d",&(*ptr).b);
    printf("displaying ");
    printf("%d %d",(*ptr).a,(*ptr).b);
    return 0;


}
