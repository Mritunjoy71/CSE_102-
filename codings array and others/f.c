#include<stdio.h>
int main()
{
    FILE *m;
    m=fopen("E:\\text file\\student.txt","r");
    char line[160];

    while(!feof(m))
    {
        fgets(line,160,m);
        puts(line);
    }
    fclose(m);
    return 0;
}
