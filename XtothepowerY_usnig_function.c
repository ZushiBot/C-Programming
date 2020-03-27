#include<stdio.h>
int power(int x,int y);
main()
{
int a,n,p;
printf("Input A Number : ");
scanf("%d",&a);
printf("Input Power : ");
scanf("%d",&n);
p=power(a,n);
printf("Answer : %d",p);
}

int power(int x,int y)
{
int z;
    z=x;
    if (y==0)
    {
        z=1;
    }
else
    for (size_t i=2;i<=y;i++)
    {
        z*=x;
    }
return z;
}
