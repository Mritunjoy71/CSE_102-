//The input is an integer - year.

// Print "YES" (without the quotation marks) if year is a leap-year and "NO" (without the quotation marks) otherwise.

// No other variable can be used.

#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Yes.\n");

    else
        printf("No.\n");

    return 0;
}

