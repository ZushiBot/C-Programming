#include <stdio.h>
main()
{


  int n;
  printf("how many numbers you gonna add ?\n");
  scanf("%d",&n);

  int a[n];
  printf("Input Numbers : \n" );

  for (size_t i=0;i<n;i++)
  {
    scanf("%d",&a[i] );
  }

  printf("Output : \n");
  for (size_t i=0;i<n;i++)
  {
    printf("%d  ",a[i] );
  }
  printf("\n");

}
