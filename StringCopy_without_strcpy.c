#include <stdio.h>
main()

{
    char Name[30];
    char Name2[30];
    printf("Input Your Name :\n");
    scanf("%s",&Name);
    int i=0;
    while (Name[i]!='\0')
    {
    Name2[i]=Name[i];
    i++;
    }
    printf("Copying From Name To Name2 ............\n");
    printf("Copied..... \n :=: %s :=:",Name2);

}
