#include <stdio.h>
main()
{
    char name1[30]={'\0'};
    printf("Name One : ");
    scanf("%s",&name1);

    //done;

    strrev(name1);
    puts(name1);

}
