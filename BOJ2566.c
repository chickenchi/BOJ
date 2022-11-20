#include <stdio.h>

int main()
{
    int mx=-1, i, j, mi, mj;
    int b;

    for(i=1;i<=9;i++)
        for(j=1;j<=9;j++)
        {
            scanf("%d", &b);
            if(mx<b) mx=b, mi=i, mj=j;
        }
    
    printf("%d\n%d %d", mx, mi, mj);
    return 0;
}