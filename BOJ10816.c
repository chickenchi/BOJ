#include <stdio.h>
#include <stdlib.h>
#define MX 20000001

int main()
{
  int *a=(int*)malloc(sizeof(int)*MX);
  int b,c;
  scanf("%d",&b);
  for(int i=1;i<=b;i++)
  {
    scanf("%d",&c);
    a[c+10000000]+=1;
  }
  scanf("%d",&b);
  for(int i=1;i<=b;i++)
  {
    scanf("%d",&c);
    printf("%d ",!a[c+10000000]?0:a[c+10000000]);
  }
  free(a);
  return 0;
}