#include <stdio.h>

int main()
{
    int a,b,c,r,cycle=1;
    scanf("%d",&a);
    c=a;

    b=a%10;
    c=a/10+b;
    if(c>9) c%=10;
    r=b*10+c;
    if(r==a)
    {
        printf("1");
        return 0;
    }

    cycle++;

    while(1)
    {
        b=r%10; // 68%10 -> 8
        c=r/10+b; // 6+8 -> 14
        if(c>9) c%=10;
        r=b*10+c; // 80+4 -> 84
        if(r==a) break;
        else cycle++;
    }
    printf("%d",cycle);
    return 0;
}