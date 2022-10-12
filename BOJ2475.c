#include <stdio.h>
#include <math.h>

int main()
{
    int a,tot=0;
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&a);
        tot+=pow(a,2);
    }
    printf("%d",tot%10);
    return 0;
}