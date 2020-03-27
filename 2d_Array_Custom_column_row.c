#include <stdio.h>
main()

{
    int r=0,c=0;
    printf("Row : ");
    scanf("%d",&r);
    printf("Column : ");
    scanf("%d",&c);
    //initializing r,c;

    int mat[r][c];
    int i,j;
    printf("Elelments : ");

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

for (i=0;i<r;i++)
    {
        printf("|");
        for (j=0;j<c;j++)
        {
            printf(" %d ",mat[i][j]);
        }
        printf("|");
        printf("\n");
    }



}
