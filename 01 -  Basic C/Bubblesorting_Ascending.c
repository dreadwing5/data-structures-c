#include<stdio.h>
int main()
{
  int a[20],i,j,temp,n;
  printf("Enter The Number of Elements : "  );
  scanf("%d",&n);
  printf("Enter The Integers :\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-1-i;j++)
      {
        if(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }
    }
    printf("Sorted list in ascending order:\n");
    for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
    return 0;

}
