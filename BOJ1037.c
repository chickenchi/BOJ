#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,r=1,min=1000001,max=0;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&b);
        if(min>b) min=b;
        if(max<b) max=b;
    }
    printf("%d",min*max);
    return 0;
}