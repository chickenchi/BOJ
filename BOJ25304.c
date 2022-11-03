#include <stdio.h>

int main()
{
    int a,b,c,d,t=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        scanf("%d%d",&c,&d);
        t+=c*d;
    }
    printf(a==t?"Yes":"No");
    return 0;
}