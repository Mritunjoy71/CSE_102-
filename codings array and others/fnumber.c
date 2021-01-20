
#include<stdio.h>
main(){
    FILE *f1,*f2,*f3;
    int number ,i;
    printf("contents of DATA files\n\n");
    f1=fopen("E:\\n.txt","w");
    for(i=0;i<10;i++)
    {
        scanf("%d",&number);
        if(number==-1) break;
        putw(number,f1);

    }

    fclose(f1);

    f1=fopen("E:\n.txt","r");
    f2=fopen("E:\o.txt","w");
    f3=fopen("E:\e.txt","w");




    ///read from data file

    while(number=getw(f1)!=EOF)
    {
        if(number%2==0)
            putw(number,f3);
        else
            putw(number,f2);



    }

     fclose(f1);
     fclose(f2);
     fclose(f3);


     f2=fopen("E:\\o.txt","r");
     f3=fopen("E:\\e.txt","r");


     printf("\n\ncontents of odd files\n\n ");
     while(number=getw(f2)!=EOF)
     {
         printf("%4d",number);
     }


     printf("\n\ncontents of even files\n\n ");
     while(number=getw(f3)!=EOF)
     {
         printf("%4d",number);
     }


    fclose(f2);
    fclose(f3);










    return 0;



}
