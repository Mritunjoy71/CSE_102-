#include<stdio.h>
int main()
{
    char str[100];
    char *p;

    gets(str);
    p=str;


    while(*p!='\0'){
        printf("%c",*p++);
    }
    return 0;











}
