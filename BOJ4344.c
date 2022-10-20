#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, cnt=0;
    double q=0;
    int tot[1000]={0}, p[1000]={0};
    scanf("%d",&a);
    for(int i=0;i<a;i++,cnt=0,q=0)
    {
        scanf("%d",&b);
        for(int j=0;j<b;j++)
        {
            scanf("%d",&p[j]);
            tot[i]+=p[j];
        }
        q+=(double)tot[i]/b;
        for(int j=0;j<b;j++)
            if(q<p[j]) cnt++;
        printf("%.3f%%\n",(double)cnt/b*100);
    }
    return 0;
}