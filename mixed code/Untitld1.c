#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    double value;
    double result;

    /* Assign the value we will find the atan of */
    value = 0.5;

    /* Calculate the Arc Tangent of value */
    result = atan(value);

    /* Display the result of the calculation */
    printf("The Arc Tangent of %f is %f\n", value, result);

    return 0;
}
