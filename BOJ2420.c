#include <stdio.h>
#include <math.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a>b?a-b:b-a);
    return 0;
}