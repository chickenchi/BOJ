#include <stdio.h>
#include <math.h>
#define MX 10001

int arr[MX];
int px=10000,p1,p2;

int digit(int a)
{
    int p=2;
    if(arr[a])
        if(arr[a]==1) return 1;
        else return 2;
    for(int i=2;i*i<=a;i++)
        if(a%i==0) p=1;
    arr[a]=p;
    return p;
}

void f(int a)
{
    for(int i=2;i<a;i++)
    {
        int o=a-i;
        if(digit(i)!=1 && digit(o)!=1 && o>1)
            if(abs(i-o)<px)
            {
                px=abs(i-o);
                p1=i,p2=o;
            }
    }
    printf("%d %d\n", p1, p2);
    p1=0;
    p2=0;
    px=10000;
    return;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&b);
        f(b);
    }
    return 0;
}