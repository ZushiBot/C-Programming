#include <stdio.h>
#include<windows.h>
main()

{
    int r=0,c=0;
    printf(":: Matrix A :: \n");
    printf("Row : ");
    scanf("%d",&r);
    printf("Column : ");
    scanf("%d",&c);
    //initializing r,c;

    int matA[r][c];
    printf("Elelments : ");

    for (size_t i=0;i<r;i++)
    {
        for (size_t j=0;j<c;j++)
        {
            scanf("%d",&matA[i][j]);
        }
    }
    printf("\n\n");

for (size_t i=0;i<r;i++)
    {
        printf("|");
        for (size_t j=0;j<c;j++)
        {
            printf(" %d ",matA[i][j]);
        }
        printf("|");
        printf("\n");
    }
// mat B
printf(" \n \n");
int r2=0,c2=0;
printf(":: Matrix B :: \n");
    printf("Row : ");
    scanf("%d",&r2);
    printf("Column : ");
    scanf("%d",&c2);
    //initializing r2,c2;

int matB[r2][c2];
    printf("Elelments : ");

    for (size_t i=0;i<r2;i++)
    {
        for (size_t j=0;j<c2;j++)
        {
            scanf("%d",&matB[i][j]);
        }
    }
    printf("\n\n");

for (size_t i=0;i<r2;i++)
    {
        printf("|");
        for (size_t j=0;j<c2;j++)
        {
            printf(" %d ",matB[i][j]);
        }
        printf("|");
        printf("\n");
    }

//Now Adding Two Mat
Sleep(1000);
system("cls");
printf("Matrix A + Matrix B = ");
for (size_t n=0;n<10;n++)
{
    printf(".");
    Sleep(200);
}

// Addition :
if (r==r2 && c==c2)
{


int matC[r][c];

for (size_t i=0;i<r2;i++)
    {
        for (size_t j=0;j<c2;j++)
        {
           matC[i][j]= matA[i][j] + matB[i][j];
        }
    }
    printf("\n\n");

for (size_t i=0;i<r2;i++)
    {
        printf("|");
        for (size_t j=0;j<c2;j++)
        {
            printf(" %d ",matC[i][j]);
        }
        printf("|");
        printf("\n");
    }
}

else
    printf("\n Addition Not Possible ");
}
