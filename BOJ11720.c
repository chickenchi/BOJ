#include <stdio.h>

int main()
{
    int a[100];
    int b,tot=0;
    scanf("%d",&b);
    for(int i=0;i<b;i++) scanf("%1d",&a[i]);
    for(int i=0;i<b;i++) tot+=a[i];
    printf("%d",tot);
    return 0;
}