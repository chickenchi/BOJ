#include <stdio.h>

int main()
{
    char a[100];
    int i=0, result=0, re=0;
    scanf("%s",a);
    while(a[i]!='\0')
    {
        if(a[i]!=',') re = re * 10 + (a[i] - '0');
        else
        {
            result += re;
            re = 0;
        }
        i++;
    }
    result += re;
    printf("%d", result);
    return 0;
}
