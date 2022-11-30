#include <stdio.h>

int memo[12]={1, 1, 2, 4};

int f(int b)
{
    if(memo[b]) return memo[b];
    return memo[b]=f(b-1)+f(b-2)+f(b-3);
}

int main()
{
    int a, b;
    scanf("%d", &a);
    while(a--)
    {
        scanf("%d", &b);
        printf("%d\n", f(b));
    }
    return 0;
}