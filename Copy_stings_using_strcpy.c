#include <stdio.h>
main()

{
    char Name[30];
    char Name2[30];
    printf("Input Your Name :\n");
    scanf("%s",&Name);

    strcpy(Name2,Name);
    printf("Copying From Name To Name2 ............\n");
    printf("Copied...... \n :=: %s :=:",Name2);

}
