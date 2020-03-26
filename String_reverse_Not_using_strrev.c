#include <stdio.h>
main()
{
    char name1[30]={'\0'};
    printf("Name One : ");
    scanf("%s",&name1);

    //done;
    int i=0;
    while (name1[i]!='\0')
    {
        i++;
    }

    char temp[30]={'\0'};
    int j=0;
    while (name1[j]!=0){
    temp[i-1]=name1[j];
    i--;
    j++;
    }

    printf("%s",temp);

}
