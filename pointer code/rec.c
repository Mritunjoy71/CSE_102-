#include<stdio.h>
void recurse(int i);
int main ()
{
    recurse (100);

    return 0;

}
void recurse(int i){
    if(i>0){
        recurse(i-1);//recursive call

        printf("%d\n",i);

    }

}
