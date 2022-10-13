#include <stdio.h>

int arr[1000],i;

int digit(int a, int d)
{
    if(d==1) return 0;
    if(a%d==0) return 1;
    return digit(a,d-1);
}

void f(int a, int b)
{
    if(a>b) return;
    else if(!digit(a,a-1)) arr[i++]=a;
    return f(a+1, b);
}

int main()
{
    int a,b,tot=0,low=10000;
    scanf("%d%d",&a,&b);
    if(a<2) a=2;
    f(a,b);
    for(int i=0;arr[i];i++)
    {
        tot+=arr[i];
        if(arr[i]<low) low = arr[i];
    }
    if(!tot) printf("-1");
    else printf("%d\n%d", tot, low);
    return 0;
}