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

    int i=0;
    int count=0;

    while (name1[i]!='\0')
    {
        if (name1[i]!=name2[i])
        {

            count++;

        }
        i++;

    }

      if (count==0)
      {
          printf("equal");
      }
      else
        printf("Not Equal");
}
