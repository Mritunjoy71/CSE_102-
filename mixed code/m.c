#include<stdio.h>
struct stores
{
    char name[20];
    float price;
    int quantity;

};

struct stores update(struct stores product,float p,int q);
float mul (struct stores stock);
main()
{
    float p_increment,value;
    int q_increment;

    struct stores item ={"XYZ",25.75,12};
    printf("\n enter increment values :");
    printf("   price increment and quantity increment \n");
    scanf("%f %d",&p_increment,&q_increment);
    printf("updated values of item\n\n");
    printf("name     :%s\n",item.name);
    printf("price    :%f\n",item.price);
    printf("quantity :%d\n",item.quantity);
    value=mul(item);


    printf("\nvalue of the item = %f",value);

}
struct stores update(struct stores product,float p,int q)
{
    product.price+=p;
    product.quantity+=q;
    return (product);

};
float mul(struct stores stock)
{
    return(stock.price*stock.quantity);
}
