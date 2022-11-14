#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[6];
    int result = 0, t = 0;
    scanf("%s", a);
    for(int i = strlen(a) - 1; i >= 0; i--)
    {
        if(a[i] >= 'A' && a[i] <= 'F') result += (a[i] - 55) * pow(16, t);
        else result += (a[i] - '0') * pow(16, t);
        t++;
    }
    printf("%d", result);
    return 0;
}