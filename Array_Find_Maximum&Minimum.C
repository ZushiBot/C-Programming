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

//Maximum Value

  int Max=0;
  for (size_t i=0;i<n;i++)
  {
    if (a[i]>=Max)
        Max=a[i];
  }

  printf("Maximum value is = %d",Max);
  printf("\n");
//Minimum value
  int Min=a[0];
  for (size_t i=0;i<n;i++)
  {
    if (a[i]<=Min)
        Min=a[i];
  }

  printf("Minimum value is = %d",Min);
  printf("\n");

}
