#include <stdio.h>

int digit(int a, int d)
{
    int p=0;
    for(int i=d;i*i<=a;i++)
        if(a%i==0) p=1;
    return p;
}

void f(int a, int b)
{
    if(a>b) return;
    else if(!digit(a,2)) printf("%d\n",a);
    return f(a+1, b);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<2) a=2;
    f(a,b);
    return 0;
}