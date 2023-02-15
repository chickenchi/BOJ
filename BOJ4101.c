#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    while(a || b)
    {
        printf(a <= b ? "No\n" : "Yes\n");
        scanf("%d %d", &a, &b);
    }
    return 0;
}