#include<stdio.h>
union job {
    char name[32];
    float salary;
    int id;
};
int main()
{
    union job u;
    scanf("%s",u.name);
    scanf("%f",&u.salary);
   // scanf("%d",&u.id);
    printf("name : %s",u.name);
    printf("\n%f",u.salary);
  //  printf("%d",u.id);
    return 0;
}
