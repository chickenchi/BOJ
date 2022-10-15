#include <stdio.h>

int b;

int f(int a)
{
    if(b<a) return 1;
    printf("%d\n",a);
    return f(a+1);
}

int main()
{
    scanf("%d",&b);
    f(1);
    return 0;
}
