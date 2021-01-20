
// Find the largest among a, b, c.

// YOU ARE NOT ALLOWED TO USE ANY CONDITIONAL OPERATOR EXCEPT THE TERNARY OPERATOR.

// YOU ARE NOT ALLOWED TO WRITE MORE THAN ONE LINE OR STATEMENT.

// NO OTHER VARIABLE CAN BE USED OTHER THAN THE FOUR VARIABLES DECLARED HERE.

#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("Enter three integers:\n");

    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ( (a > c) ? a : c ) : ( (b > c) ? b : c);

    printf("The maximum is:  %d\n", max);

    return 0;
}
