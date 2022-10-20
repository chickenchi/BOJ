#include <stdio.h>
#define MX 10000

void d();

int main()
{
    int a=1,b=MX,sum=0;

    for(a;a<=b;a++) d(a);
    return 0;
}

void d(int a)
{
    int q=0;
    for(int i=1;i<=a;i++,q=0)
    {
        int t=i;
        while(t)
        {
            q+=t%10;
            t/=10;
        }
        if(q+i==a) return;
    }
    return printf("%d\n",a);
}