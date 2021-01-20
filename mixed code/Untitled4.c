

// Find the letter grade obtained corresponding to the input, marks.

// YOU ARE NOT ALLOWED TO USE ANY CONDITIONAL OPERATOR OTHER THAN SWITCH.

// You must handle the exceptional cases where marks < 0 or marks > 100. In these cases, print "INVALID INPUT" (without the quotation marks).

// The trick mentioned in 03. Electricity Bill Calculator.c will be helpful for handling the exceptions.


#include <stdio.h>

int main()
{
    double marks;
    char grade;

    scanf("%lf", &marks);


    switch ((int)marks)  // switch does not support double. Hence, typecasting is necessary.
    {
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case -1:
        case -2:
        case -3:
        case -4:
        case -5:
        case -6:
        case -7:
        case -8:
        case -9:
            {
                printf("\nINVALID INPUT\n");
                return 0;
            }

        default: ;
    }



    switch  ( (int)marks / 10 )  // switch does not support double. Hence, typecasting is necessary.
    {
        case 10:
        case  9:
        case  8:
            {
                grade = 'A';
                break;
            }

        case 7:
            {
                grade = 'B';
                break;
            }

        case 6:
            {
                grade = 'C';
                break;
            }

        case 5:
            {
                grade = 'D';
                break;
            }

        case 4:
            {
                grade = 'E';
                break;
            }

        case 3:
        case 2:
        case 1:
        case 0:
            {
                grade = 'F';
                break;
            }

        default:
            {
                printf("\nINVALID INPUT\n");
                return 0;
            }

    }

    printf("The obtained letter grade is:   %c\n", grade);

    return 0;
}

