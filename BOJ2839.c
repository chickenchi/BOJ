#include <stdio.h>

int main()
{
    int a;
    int i=0;
    int fnd=0;
    scanf("%d", &a);
    do {
        int d = a%5 + 5*i;
        if(d == a) break;
        if(d % 3 == 0)
        {
            fnd = a/5-i + d/3;
            printf("%d", fnd);
            return 0;
        }
    } while(++i);
    if(a%3) printf("-1");
    else printf("%d", a/3);
    return 0;
}