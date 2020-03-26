#include <stdio.h>
main()

{
    char name[30];
    printf("Input Your Name :\n");
    scanf("%s",&name);

    int i=0;
    while (name[i]!='\0')
    {
        printf("%c\n",name[i]);
        i++;
    }

}
