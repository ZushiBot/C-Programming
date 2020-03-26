#include <stdio.h>
main()


{
    char name[30]={'\0'};
    char surname[30]={'\0'};
    printf("Input your Name : \n");
    scanf("%s",&name);
    printf("Input your SurName : \n");
    scanf("%s",&surname);

    int i=0;
    while (name[i]!='\0')
    {
        i++;
    }

    int j=0;

    while (surname[j]!='\0')
    {
        name[i]=surname[j];
        j++;
        i++;
    }

    printf("%s",name);


}
