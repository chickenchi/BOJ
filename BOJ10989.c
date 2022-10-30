#include <stdio.h>
#define MX 10001
int arr[MX];
int main()
{
    int a,t;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&t);
        arr[t]+=1;
    }
    for(int i=1;i<MX;i++)
        for(int j=1;j<=arr[i];j++)
            printf("%d\n",i);
    return 0;
}