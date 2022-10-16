#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,r=0;
    int c[101]={0};
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++)
        scanf("%d",&c[i]);
    for(int i=1;i<=a;i++)
        for(int j=i+1;j<=a;j++)
            for(int k=j+1;k<=a;k++)
            {
                int q=c[i]+c[j]+c[k];
                    if(abs(b-r)>abs(b-q) && q<=b)
                        r=c[i]+c[j]+c[k];
            }
    printf("%d",r);
    return 0;
}