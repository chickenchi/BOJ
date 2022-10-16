#include <stdio.h>
int main()
{
  int a[9],b=0;
  for(int i=1;i<9;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]==i)
      if(!b || b==1) b=1;
      else b=3;
    else if(a[i]==9-i)
      if(!b || b==2) b=2;
      else b=3;
    else b=3;
  }
  printf(b==1?"ascending":b==2?"descending":"mixed");
  return 0;
}