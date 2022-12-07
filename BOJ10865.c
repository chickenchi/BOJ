#include <stdio.h>

int fr[100001];

int main()
{
    int a, b;
    int f1, f2;
    scanf("%d %d", &a, &b);
    for(int i=0; i<b; i++)
    {
        scanf("%d %d", &f1, &f2);
        fr[f1] += 1;
        fr[f2] += 1;
    }
    for(int i=1; i<=a; i++) printf("%d\n", fr[i]);
    return 0;
}