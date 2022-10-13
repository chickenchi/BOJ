#include <stdio.h>
int main()
{
    int a,b[1000],MX=0;
    double tot=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<a;i++)
        if(MX<b[i]) MX=b[i];
    for(int i=0;i<a;i++)
        tot+=(double)b[i]/MX*100;
    printf("%.8g",tot/a);
    return 0;
}