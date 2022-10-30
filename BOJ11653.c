#include <stdio.h>

int a;

void f(int b)
{
    if(a==1) return;
    if(a%b==0)
    {
        printf("%d\n",b);
        a/=b;
        f(2);
    }
    else f(b+1);
}

int main()
{
    scanf("%d",&a);
    f(2);
    return 0;
}