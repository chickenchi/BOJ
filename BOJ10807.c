#include <stdio.h>

int main()
{
    int a,c,t=0;
    int b[100];
    scanf("%d",&a);
    for(int i=1;i<=a;i++) scanf("%d",&b[i]);
    scanf("%d",&c);
    for(int i=1;i<=a;i++) t+=c==b[i]?1:0;
    printf("%d",t);
    return 0;
}