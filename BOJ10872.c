#include <stdio.h>

int f(int a)
{
    if(a<2) return 1;
    return f(a-1)*a;
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",f(a));
    return 0;
}