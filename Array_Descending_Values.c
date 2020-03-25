#include <stdio.h>
main()

{
  int n;
  printf("Size of Array : " );
  scanf("%d",&n );
  //
  int a[n];
  for (size_t i=0;i<n;i++)
  {
    scanf("%d",&a[i] );
  }

  // intialization is Done

  for (size_t i=0;i<n;i++) //main Array
  {
    for (size_t j=0;j<n;j++) // check
    {
      if (a[j]<a[i])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }

  //Descencding  Done
  printf("\n");
  printf("Descending :\n", );

  for (size_t i=0;i<n;i++){
  printf(" %d ",a[i] );
}
}
