#include <stdio.h>
main()

{
    int mat[2][3];
    int i,j;
    printf("Elelments : ");

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

for (i=0;i<2;i++)
    {
        printf("|");
        for (j=0;j<3;j++)
        {
            printf(" %d ",mat[i][j]);
        }
        printf("|");
        printf("\n");
    }



}
