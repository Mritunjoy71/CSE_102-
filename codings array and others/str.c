#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int i, n;

    gets(str);
    n = strlen(str);



    i=0;
    printf("%d %d\n", i, n);

    /// remove the leading space
    while(str[i]==' ') {
        i++;
    }

    /// remove the trailing space
    while(str[n-1]==' ') {
        n--;
    }

    str[n]='\0';
    printf("%d %d\n", i, n);

    for(; i<n; i++) {
        if(str[i]!=' ') printf("%c", str[i]);
        else {
            if(str[i+1]!=' ')printf("%c", str[i]);
        }
         }
    printf("\n");

    return 0;
}


