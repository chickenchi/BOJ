#include <stdio.h>

int main()
{
    int a[3],d=0,e=0,f=0;
    for(int i=0;i<3;i++)
        scanf("%d",&a[i]);
    if(a[0]==a[1]) d++,e=a[0];
    if(a[1]==a[2]) d++,e=a[1];
    if(a[0]==a[2]) d++,e=a[2];
    for(int i=0;i<3;i++)
        if(f<a[i]) f=a[i];
    printf("%d", d==3 ? 10000+e*1000 : d>0 ? 1000+e*100 : f*100);
    return 0;
}