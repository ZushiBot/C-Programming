#include <stdio.h>
main()


{
    char name[30];
    char surname[30];
    printf("Input your Name : \n");
    scanf("%s",&name);
    printf("Input your SurName : \n");
    scanf("%s",&surname);

    strcat(name,surname);

    printf("%s",name);

}
