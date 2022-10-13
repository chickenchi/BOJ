#include <stdio.h>

int digit(int a, int d)
{
    if(d==1) return 0;
    if(a%d==0) return 1;
    return digit(a,d-1);
}

int main()
{
    int a,b,tot=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b>1 && !digit(b,b-1)) tot++;
    }
    printf("%d",tot);
    return 0;
}