
// With special thanks to Ashik Sir (Prof. Dr. A.K.M. Ashikur Rahman).

// The input is an integer - time (0 <= time <= 24) which represents hour in a 24-hour clock.

// The output, ans, will be time's equivalent in a 12-hour clock.

// YOU ARE NOT ALLOWED TO USE ANY OTHER VARIABLE.

// YOU ARE NOT ALLOWED TO USE ANY CONDITIONAL OR RELATIONAL OPERATOR.

// YOU ARE NOT ALLOWED TO WRITE MORE THAN ONE STATEMENT (i.e. MORE THAN ONE LINE OF CODE).


#include <stdio.h>

int main()
{
    int time, ans;

    while(1)   // Infinite loop - program will execute multiple times. Don't worry about it. It's absolutely fine. Just write your code.
    {
        printf("Enter time in 24 hr. clock: ");
        scanf("%d", &time);

        ans = ( (time + 11) % 12 ) + 1;

        printf("Time in 12 hr. clock : %d\n\n",ans);
    }

    return 0;

}

