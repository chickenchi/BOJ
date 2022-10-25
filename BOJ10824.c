#include <stdio.h>

long long int N(long long int a)
{
    long long int t=1;
    while(a/10)
    {
        t*=10;
        a/=10;
    }
    return t;
}

int main()
{
    long long int a,i=0,c,d;
    while(i++<4)
    {
        scanf("%lld",&a);
        if(i==1) c=a;
        else if(i==3) d=a;
        else if(i==2) c=c*N(a)*10+a;
        else if(i==4) d=d*N(a)*10+a;
    }
    printf("%lld",c+d);
    return 0;
}