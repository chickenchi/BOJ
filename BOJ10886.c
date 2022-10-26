#include <stdio.h>

int main()
{
    int a,b=0,c,i;
    scanf("%d",&c);
    for(i=c;i;i--)
    {
        scanf("%d",&a);
        b+=a;
    }
    printf(c/2<b?"Junhee is cute!":"Junhee is not cute!");
    return 0;
}