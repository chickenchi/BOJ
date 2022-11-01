#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a>0 && b>0 ? 1 : a<0 && b>0 ? 2 : a<0 && b<0 ? 3 : a>0 && b<0 ? 4 : 0);
    return 0;
}