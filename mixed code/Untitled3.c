
// The input is a double type number - unit, which denotes the consumed electric units (BUT).

// Print the electricity bill to 2 decimal places.

// Handle the invalid case where unit < 0.

/*

A little trick:

It is not mandatory to write the "return" statement at the end of main() function.
You can write it anywhere in the program.
The program will stop execution wherever it finds a "return" statement and exit.

*/


/*

Billing Slabs:

Service charge: Tk. 50. (Fixed)

0 - 100 units: Tk. 2/unit
>100 - 150 units: Tk. 2.5/unit.
>150 units: Tk. 4.25/unit

*/


#include <stdio.h>

int main()

{
    double unit, bill;

    printf("\nThis program will calculate your electricity bill for you.\n\n");
    printf("Please enter the amount of your consumed unit(s) (BUT): ");

    scanf("%lf", &unit);

    if(unit < 0){
        printf("\nSorry. Your input was incorrect.\n");
        printf("Please check the amount of consumed unit(s).\n\nThank you.\n");

        return 0;
    }

    else if(unit <= 100)
        bill = unit * 2;

    else if(unit > 100 && unit <= 150)
        bill = 100 * 2 + (unit - 100) * 2.5;

    else
        bill = 100 * 2 + 50 * 2.5 + (unit - 150) * 4.25;

    printf("\nYour electricity bill is BDT %.2lf\n\nThank you.\n", bill + 50);

    return 0 ;
}
