#include <stdio.h>

int main()
{
    int a[31]={0};
    int b,c=0,d=0;
    for(int i=1;i<29;i++)
    {
        scanf("%d",&b);
        a[b]=1;
    }
    for(int i=1;i<31;i++)
        if(!a[i])
        {
            if(c>i||!c)
            {
                d=c;
                c=i;
            }
            else d=i;
        }
    printf("%d\n%d", c, d);
    return 0;
}