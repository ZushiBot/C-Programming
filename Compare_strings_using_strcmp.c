#include <stdio.h>
main()
{
    char name1[30]={'\0'};
    char name2[30]={'\0'};
    printf("Name One : ");
    scanf("%s",&name1);
    printf("\nName Two : ");
    scanf("%s",&name2);
    //done

    int cmp = strcmp(name1,name2);

    if (cmp==0)
    {
        printf("Equal");

    }
    else
        printf("Not Equal");
        
}
