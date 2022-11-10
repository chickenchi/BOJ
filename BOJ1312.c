#include <stdio.h>

int main()
{
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    t=a%b;
    for(int i=1;i<c;i++) t=(t*10)%b;
    printf("%d",(t*10)/b);
    return 0;
}