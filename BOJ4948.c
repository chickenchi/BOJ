#include <stdio.h>
#define MX 246913
int arr[MX];

int digit(int a, int d)
{
    int p=1;
    if(arr[a]>0) return arr[a]==1?1:0;
    for(int i=d;i*i<=a;i++)
        if(a%i==0) p=2;
    arr[a]=p;
    return p==1?1:0;
}

int main()
{
    int a,tot=0;
    scanf("%d",&a);
    while(a)
    {
        for(int i=a+1;i<=2*a;i++)
            tot+=digit(i,2);
        printf("%d\n",tot);
        scanf("%d",&a);
        tot=0;
    }
    return 0;
}