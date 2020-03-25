#include <stdio.h>
main()
{


  int n;
  printf("Length of Fibonacci Series : \n");
  scanf("%d",&n);

  //fibonaci Series
  int a[n];
  a[0]=0;
  a[1]=1;

  for (size_t i=2;i<n;i++)
  {
      a[i]=a[i-1]+a[i-2];
  }

  printf("\n");

  for (size_t i=0;i<n;i++)
  {
     printf("%d  ",a[i]);
  }
  printf("\n");
}
