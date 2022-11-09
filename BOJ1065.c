#include <stdio.h>

int main()
{
    int a;
    int cnt=0;
    
    scanf("%d", &a);
    if(a<100) printf("%d", a);
    else
    {
        for(int i=100;i<=a;i++)
        {
            int fir=i/100;
            int thd=i%10;
            int mid=(i%100 - thd) / 10;
            if(mid - fir == thd - mid) cnt++;
        }
        printf("%d", cnt+99);
    }
    return 0;
}