#include <stdio.h>

int main()
{
    int a,tot=1;
    int b[10]={0};
    for(int i=1;i<=3;i++)
    {
        scanf("%d",&a);
        tot*=a;
    }
    while(tot/10)
    {
        b[tot%10]+=1;
        tot/=10;
    }
    b[tot%10]+=1;
    for(int i=0;i<=9;i++)
        printf("%d\n",b[i]);
    return 0;
}