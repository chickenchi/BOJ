#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MX 500000
#define RMX 8002

int compare(const void *a, const void *b)
{
    if(*(int*)a > *(int*)b) return 1;
    else if(*(int*)a < *(int*)b) return -1;
    else return 0;
}

int main()
{
    int b,tot=0;
    int h=-4001,l=4001;
    int c[RMX]={0},s[RMX]={0};
    int *a=(int*)malloc(sizeof(int)*MX);
    double p;

    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        tot+=a[i];
    }

    int p2;
    p=(double)tot/b;
    p=round(p);
    p2=(int)p;
    printf("%d\n",p2); //

    qsort(a, b, sizeof(int), compare);
    printf("%d\n",a[b/2]);

    for(int i=0;i<b;i++)
        c[a[i]+4001]+=1;

    int f=0,switz=0,sc=0;
    for(int i=1;i<RMX;i++)
        if(c[i]>f)
        {
            for(int i=1;i<RMX;i++) s[i]=0;
            f=c[i];
            sc=-1;
            s[++sc]=i;
            switz=0;
        }
        else if(c[i]==f)
        {
            s[++sc]=i;
            switz=1;
        }

    if(switz) qsort(s, RMX, sizeof(int), compare);

    if(switz)
    {
        for(int i=RMX-1;i>0;i--)
            if(!s[i-2])
            {
                printf("%d\n",s[i]-4001);
                break;
            }
    }
    else printf("%d\n",s[0]-4001);

    for(int i=0;i<b;i++)
        if(a[i]>h) h=a[i];

    for(int i=0;i<b;i++)
        if(a[i]<l) l=a[i];
    printf("%d",abs(h-l));
    return 0;
}