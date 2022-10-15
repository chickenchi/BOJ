#include <stdio.h>

int f(int a)
{
    if(a<1) return 1;
    printf("%d\n",a);
    return f(a-1);
}

int main()
{
    int a;
    scanf("%d",&a);
    f(a);
    return 0;
}