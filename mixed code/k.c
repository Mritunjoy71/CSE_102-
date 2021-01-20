/*Program to get minimum number of bits to store an integer number.*/

#include <stdio.h>

/*function declaration
    * name      : countBit
    * Desc      : to get bits to store an int number
    * Parameter : int
    * return    : int
*/
int countBit(int);
int main()
{
    int num;
    printf("Enter an integer number :");
    scanf("%d",&num);

    printf("\nTotal number of bits required = %d\n",countBit(num));
    return 0;
}

int countBit(int n)
{
    int count=32,i;
    if(n==0) return 0;
    for(i=31; i>=0; i--)
    {
        if( !((1 << i) & n))
            count--;
        else{
            return count;
            break; }
    }

}
