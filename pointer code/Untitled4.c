main()
{
    int *p,sum;
    int x[5]={5,9,6,3,7};

    p=x;
    printf("element value address\n\n");
    while(p<=&x[4])
    {

        sum+=*p;
        p++;
    }
    printf("\nsum=%d\n",sum);
    printf("\n&x[0]=%u\n",&x[0]);
    printf("\np=%u\n",p);
}
