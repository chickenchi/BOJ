#include <stdio.h>

long long int max;
long long int s[201]={1,1,3,5};
long long int a;

long long int f(long long int max)
{
    if(s[max]) return s[max];
    return s[max]=(f(max-2)+f(max-1)+1)%1000000007;
}

int main()
{
    scanf("%lld",&max);
    printf("%lld\n",f(max));
    return 0;
}