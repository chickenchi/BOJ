#include <stdio.h>

long long int m[100]={0,1,1};

long long int f(long long int a)
{
    if(m[a] || !a) return m[a];
    return m[a]=f(a-1)+f(a-2);
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%lld",f(a));
    return 0;
}