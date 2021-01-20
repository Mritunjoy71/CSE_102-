// Print the value of (x-y) if x > y. Else, print the value of x only.

// YOU ARE NOT ALLOWED TO USE ANY CONDITIONAL STATEMENT. ( i.e. "if - else" or switch )

// YOU ARE NOT ALLOWED TO DECLARE OR USE ANY OTHER VARIABLE.

// You are free to write as many statements as you require. But one statement is enough.

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);


    printf("%d\n", x - y * (x > y) );


    return 0;
}
