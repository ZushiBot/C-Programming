#include <stdio.h>
main()

{
  //variable diclearation
  int n,t;
  printf("Size of array\n");
  scanf("%d",&n);

  //intialization
  int a[n];
  printf("Elements :\n");

  for (size_t i=0;i<n;i++)
  {
    scanf("%d",&a[i] );
  }
  //Ascending values
for (size_t i=0;i<n;i++)// main
{
  for (size_t j=0;j<n;j++)// Check
  {
    if (a[j]>a[i])// j is main
    {
      t=a[i];
      a[i]=a[j]; // i to j , j to i
      a[j]=t;
    }
  }
}
printf("Descending :" );
for (size_t i=0;i<n;i++)
{
  printf(" %d ",a[i] );
}
printf("\n");

  //binary search
  int x;
  printf("Search a Number :");
  scanf("%d",&x);
  int m,L,R;
  L=0;
  R=n-1;
  m=(L+R)/2;

  while (L<=R)
  {
      if(a[m]<x)
      {
          L=m+1;
          m=(L+R)/2;
      }

      else if(a[m]==x)
      {
          printf("Found\n");
          printf("Value : %d \n",a[m] );

          printf("Location at Array [%d]\n",m );

          break;
      }
      else
          L=m-1;
          m=(L+R)/2;
  }

  if (L>R)
  {
      printf("Not Found");
  }

}
