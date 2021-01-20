main()
{
    int x,y;
    int *ptr;
    x=10;
    ptr=&x;
    y=*ptr;
    printf("value of x is %d\n]\n",x);
    printf("%d is stored at address %u\n",x,&x);
    printf("%d is stored at address %u\n",*&x,&x);
    printf("%d is stored at address %u\n",*ptr,ptr);
    printf("%d is stored at address %u\n",ptr,&ptr);
    printf("%d is stored at address %u\n",y,&y);
    *ptr=25;
    printf("\nnow x=%d\n",x);

}
