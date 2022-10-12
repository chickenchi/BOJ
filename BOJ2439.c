#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(int i=1;i<=a;i++,puts(""))
    {
        for(int j=1;j<=a-i;j++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("*");
    }
    return 0;
}