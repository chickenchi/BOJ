#include <stdio.h>
#define MX 10

int main()
{
    int b,c[MX],stack=0,s=0;
    for(int i=0;i<MX;i++,s=0)
    {
        scanf("%d",&b);
        c[i]=b%42;
        if(i!=0)
            for(int j=0;j<i;j++)
            {
                if(c[j]==c[i]) s=1;
            }
        if(s!=1) stack++;
    }
    printf("%d",stack);
    return 0;
}