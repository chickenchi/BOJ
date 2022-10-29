#include <stdio.h>

int main()
{
    int b,c;
    while(1)
    {
        scanf("%d%d",&b,&c);
        if(b && c) printf("%d\n",b+c);
        else break;
    }
    return 0;
}