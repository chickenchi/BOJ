#include <stdio.h>
#include <string.h>

int main()
{
    int a,b;
    char c[20];
    scanf("%d",&a);
    for(int i=1;i<=a;i++,puts(""))
    {
        scanf("%d%s",&b,c);
        for(int j=0;j<strlen(c);j++)
            for(int k=1;k<=b;k++)
                printf("%c",c[j]);
    }
    return 0;
}