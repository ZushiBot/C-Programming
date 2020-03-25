#include <stdio.h>
main()
{
    int v;
    int n;
    printf("how many number you wants to add ?");
    scanf("%d",&n);
    int a[n];
    printf("Complete Array using Int values : \n");

    for (size_t i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("input a number \n");
    scanf("%d",&v);


int count=0;
    for (size_t i=0;i<n;i++)
    {
        if (v==a[i])
            {
                printf("location is at a[%d]\n",i);
                count++;
                break;

            }
    }

    if (count!=0)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nnot Found");
    }

}
