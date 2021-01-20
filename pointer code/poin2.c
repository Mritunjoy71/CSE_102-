
#include<stdio.h>


int main() {

    int a;

    int *p; // a pointer to double


    a = 10;

    p = &a; // not OK, p is a pointer to double


    printf("a = %d\n", a);

    printf("p = %p\n", p);

    printf("*p = %d\n", *p);


    *p= 100;

    printf("a = %d\n", a);


    int *q,b; // points to NULL or 0
    b=30;
    q=&b;
    printf("q= %p\n", q);


    *q = 10; // not OK, p is a pointer to nothing

    printf("*q= %d\n", *q);

   return 0;

}
