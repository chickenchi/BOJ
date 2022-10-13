#include <stdio.h>
#define MX 9

int main()
{
    int hr=0,h;
    int b[MX];
    for(int i=0;i<MX;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<MX;i++)
        if(b[i]>hr) hr=b[i],h=i+1;
    printf("%d\n%d",hr, h);
    return 0;
}