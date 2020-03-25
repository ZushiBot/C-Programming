#include <stdio.h>
main()

{
    int n,t;
    printf("Size of Array : \n");
    scanf("%d",&n);

    int a[n];
    printf("Elelments:\n");

    for (size_t i=0;i<n;i++)
        scanf("%d",&a[i]);
    //intialization is Done;

    for (size_t i=0;i<n;i++) //main 
    {
        for (size_t j=0;j<n;j++)// Check
        {
            if (a[j]>a[i])
            {
                t=a[i];
                a[i]=a[j];  //swap
                a[j]=t;
            }
        }
    }

    printf("\n");
    printf("Ascending Value : ");
    for (size_t i=0;i<n;i++)
        printf("%d  ",a[i]);

}
