#include <stdio.h>
#include <windows.h>
main()
{
    char name1[30]={'\0'};
    char name2[30]={'\0'};
    char temp[30]={'\0'};
    printf("Input Name One : ");
    gets(name1);
    printf("Input Name Two : ");
    gets(name2);
    printf("( %s , %s )\n",name1,name2);

    //swap

    strcpy(temp,name1);
    strcpy(name1,name2);
    strcpy(name2,temp);

    printf("Swaping Name One And Name Two ");
    for (size_t i=0;i<10;i++)
{
    printf(".");
    Sleep(300);
}

    printf("\n::After Swaping::\n");


    printf("Name one : %s \nName Two : %s \n",name1,name2);

}
