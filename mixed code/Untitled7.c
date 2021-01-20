
                // Quadratic equation solver.

                // You are free to write as many statements as you require.

                // You are free to declare and use as many new variables as required.

                // You can use the built-in sqrt() function. It is defined in math.h.

#include <stdio.h>
#include <math.h>

int main()

{
    double a , b , c , det , non_neg_det , x1 ,x2 ;

    printf("This program will solve a quadratic equation.\n( An equation of the form ax^2 + bx + c = 0 ).\n\n");
    printf("Please enter the values for a, b and c:\n\n");

    printf("a = ?\n");
    scanf("%lf", &a);

    printf("\nb = ?\n");
    scanf("%lf", &b);

    printf("\nc = ?\n");
    scanf("%lf", &c);

    if(a == 0){
        if(b == 0)
            printf("\nSorry. It's not an equation at all.\nPlease check the input.\n");

        else{
            printf("\nThe solution is:\n");
            printf("\nx = %lf\n",-c/b);

            // The equation turns into linear in this case.
        }
    }

    else{
        det =  b * b - 4 * a * c  ;  // Calculating the determinant.


        non_neg_det = (det >= 0) ? sqrt(det) : sqrt(-det) ;  // Taking the non-negative value of the determinant.

        printf("\nThe solutions are:\n\n");

        if(det >= 0){   // Determinant is non-negative.
            x1 = (-b - non_neg_det) / (2 * a);
            x2 = (-b + non_neg_det) / (2 * a);

            if (x1 == x2)
                printf("x1 = x2 = %lf\n", x1);

            else{
                printf("x1 = %lf\n", x1);
                printf("x2 = %lf\n", x2);
            }
        }

        else{   // Determinant is negative.
            printf("x1 = %lf - %lfi\n",( -b / (2*a) ), ( non_neg_det / (2 * a) ) );
            printf("x2 = %lf + %lfi\n",( -b / (2*a) ), ( non_neg_det / (2 *a ) ) );
        }
    }

    printf("\nThank you.\nPress any key to exit...\n");

    return 0 ;
}
