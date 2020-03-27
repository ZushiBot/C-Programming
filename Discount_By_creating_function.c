#include <stdio.h>
#include <stdlib.h>
main()
{

    int total,price,discount;
    start:
        printf("\n!! Type C to ClearScreen & E for Exit Program!!\n");
        printf("\nPrice : ");
    scanf("%d",&price);
    printf("\nDiscount : ");
    scanf("%d",&discount);
    //process
    total=price+discount;
    printf("\nTotal : %d",total);

    char a;
    scanf("%ch",&a);
    if (a=='C')
    {
      system("cls");
      goto start;
    }
    else if (a=='E')
        printf("< Exit >");
    else
        goto start;




}

//function
int Discount(int price,int discount)
{
    size_t temp=price-((discount*price)/100);
    return temp;
}
