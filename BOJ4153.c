#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(a || b || c)
    {
        if(a*a + b*b == c*c) printf("right\n");
        else if(b*b + c*c == a*a) printf("right\n");
        else if(c*c + a*a == b*b) printf("right\n");
        else printf("wrong\n");
        scanf("%d%d%d",&a,&b,&c);
    }
    return 0;
}