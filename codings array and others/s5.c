#include<stdio.h>
struct student {
char name[20];
int roll;};
int main()
{
    struct student s1;
    printf("enter name ");
    scanf("%s",&s1.name);
    printf("enter roll ");
    scanf("%d",&s1.roll);
    display(s1);

    return 0;
}
void display(struct student stu)
{
    printf(" name: %s\n\n roll: %d",stu.name,stu.roll);
}
